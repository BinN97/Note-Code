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
安装：
```
npm install -g @tendermint/starport
```
```
git clone https://github.com/tendermint/starport @@ cd starport @@ make
```
![](https://i.loli.net/2020/11/25/qR1bApyf63MsmVz.png)
这一步安装完毕，就可以使用starport了。

当然，也可以使用在线编辑环境[Starport environment](https://gitpod.io/#https://github.com/tendermint/starport/
)
```
https://gitpod.io/#https://github.com/tendermint/starport/
```
## 使用starport构建PoFE
通过运行starport来搭建应用程序
```
starport app github.com/user/pofe
```


![](https://i.loli.net/2020/11/25/qR1bApyf63MsmVz.png)
