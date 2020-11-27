# 文件存在证明(Proof of File Existence)
介绍：文件存在证明可以帮助证明某个时间某个文件的真实性。

## 问题：怎么创建一个文件存在的证据？
创建文件存在的证明可以通过检测待证明文件的SHA256哈希来完成，每份文件对应的SHA256哈希函数输出结果都是唯一的，并且基本不会发生冲突。

文件的SHA256哈希值也被称为checksum，当我们上传一个checksum到区块链，可以在发生纠纷时计算文件的哈希散列值来和已存储的checksum进行对照，便能够证明文件存在以及判定文件所有权，并且不会泄露文件数据隐私。

## POFE用例
+ 时间戳文件

可以任取一份文件并将文件的哈希值存在链上作为文件存在的证明。

这样，可以通过共享文件并让其他人计算校验，以此来证明在提交时你已拥有此文件。

同时，通过共享包含此哈希值的交易链接，来证明执行交易时文件已存在。
+ 文档完整性

政府组织可以发布数字法律文件，将散列值作为区块链文件存在的证明

## 应用概述
实现一个简单的区块链应用程序，用户可以选择一个文件，对其进行哈希运算，并上传到区块链。同时，用户还具有撤销索赔的功能。

## 需求
Starport：区块链框架定制工具
安装starport：
```
git clone https://github.com/tendermint/starport
```
下载完毕进入文件夹执行make，就可以使用构建应用了。
```
cd starport
make
```
![](https://i.loli.net/2020/11/25/qR1bApyf63MsmVz.png)

当然，也可以使用在线编辑环境[Starport environment](https://gitpod.io/#https://github.com/tendermint/starport/
)
```
https://gitpod.io/#https://github.com/tendermint/starport/
```
# 使用starport构建PoFE
通过运行starport应用程序<code>github.com/user/pofe</code>来搭建我们的程序，从github下载pofe
```
starport app github.com/user/pofe
```
下载完毕，显示如下：
![](https://i.loli.net/2020/11/25/3Wva4ENOFw7qpHu.png)
安装，提示需要缺失protoc，安装后重新执行：
![](https://i.loli.net/2020/11/26/nYJG35LEkZgtzHm.png)

## 运行应用程序
在安装完毕会新生成一个pofe文件夹，在此打开终端，运行
```
starport serve
```
会打开应用程序，看到以下的输出：
![](https://i.loli.net/2020/11/26/fqSdt4hDzMuFK9c.png)
在浏览器打开<code>http://localhost:12345/</code>看到starport已为我们建立了一条区块链
![](https://i.loli.net/2020/11/26/Ort2Z8NxqWosAvR.png)

## 创建claim类型
回到pofe目录下，创建一个带有<code>proof</code>字段的索赔类型<code>claim</code>：
```
starport type claim proof:string
```
这就创建索赔类型了，添加相应的CLI命令、处理程序、消息、类型、查询程序等

至此就创建了一个可以使用的应用程序，通过检查窗口来验证
![](https://i.loli.net/2020/11/26/w46xkhGuWZ5LEAN.png)
但还是需要修改程序

## 修改应用程序
需要实现一个接口，用户无需上传文件本身而直接上传文件哈希值，在<code>./x/pofe/client/cli/txClaim.go</code>来实现
```
package cli

import (
	"bufio"
	"crypto/sha256"
	"encoding/hex"
	"io/ioutil"

	"github.com/spf13/cobra"

	"github.com/cosmos/cosmos-sdk/client/context"
	"github.com/cosmos/cosmos-sdk/codec"
	sdk "github.com/cosmos/cosmos-sdk/types"
	"github.com/cosmos/cosmos-sdk/x/auth"
	"github.com/cosmos/cosmos-sdk/x/auth/client/utils"
	"github.com/lukitsbrian/poe/x/pofe/types"
)

// CLI transaction command to create a claim
func GetCmdCreateClaim(cdc *codec.Codec) *cobra.Command {
	return &cobra.Command{
		Use:   "create-claim [path-to-file]",
		Short: "Creates a new claim from a path to a file",
		Args:  cobra.MinimumNArgs(1),
		RunE: func(cmd *cobra.Command, args []string) error {
			// accept a filepath, read the file, and hash it
			hasher := sha256.New()
			s, _ := ioutil.ReadFile(args[0])
			hasher.Write(s)
			argsProof := hex.EncodeToString(hasher.Sum(nil))

			// automatically scaffolded by `starport type`
			cliCtx := context.NewCLIContext().WithCodec(cdc)
			inBuf := bufio.NewReader(cmd.InOrStdin())
			txBldr := auth.NewTxBuilderFromCLI(inBuf).WithTxEncoder(utils.GetTxEncoder(cdc))
			msg := types.NewMsgCreateClaim(cliCtx.GetFromAddress(), string(argsProof))
			err := msg.ValidateBasic()
			if err != nil {
				return err
			}
			return utils.GenerateOrBroadcastMsgs(cliCtx, txBldr, []sdk.Msg{msg})
		},
	}
}

```
最后，我们使用结构体里的<code>Proof</code>值来代替自动生成的唯一标识符<code>id</code>，这可以更容易在数据库中查询<code>Proof</code>，修改<code>./x/pofe/keeper/claim.go</code>以及其他使用<code>CreateClaim</code>方法的文件，用<code>claim.Proof</code>代替<code>claim.ID</code>
```
func (k Keeper) CreateClaim(ctx sdk.Context, claim types.Claim) {
	store := ctx.KVStore(k.storeKey)
	key := []byte(types.ClaimPrefix + claim.Proof)
	value := k.cdc.MustMarshalBinaryLengthPrefixed(claim)
	store.Set(key, value)
}
```
<!--按照设计，需要创建creator和文件的哈希Proof，为了教程的目的，保留结构体中的<code>ID</code>。如果希望清理结构体和方法，从<code>./x/pofe/types/TypeClaim.go</code>的<code>Claim</code>结构中删除<code>ID</code>字段，如下：
```
type Claim struct {
	Creator sdk.AccAddress `json:"creator" yaml:"creator"`
	Proof   string         `json:"proof" yaml:"proof"`
}
```
-->

## 提交一个文件存在证明
一旦创建完毕，运行<code>starport serve</code>，程序构建为<code>pofed</code>的二进制文件，利用文件去提交一个索赔
```
pofecli tx pofe create-claim $(which pofed) --from user1
```
交易确认之后，运行
```
profecli q pofe list-claim
```
输出
```
[
  {
    "creator": "cosmos165hphx98d767c99gtm0n7gevq2q0nwrg75pfkd",
    "proof": "534f056e58115dd106d026e00da22a32f8c776a0cd5b3dd6431598d73b5f623c"
  }
]

```
这样就索赔就存在于区块链上了，如果需要删除命令，只需要运行：
```
pofecli tx pofe delete-claim 534f056e58115dd106d026e00da22a32f8c776a0cd5b3dd6431598d73b5f623c --from user1
```
# 创建界面
