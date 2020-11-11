# GO语言教程
开源简单的编程语言,容易构造简单、可靠高效的软件

## 特色
+ 简单、快速、安全
+ 并行、有趣、开源
+ 内存管理、v数组安全、编译迅速

## 用途
应用于搭载web服务器，存储集群或类似用途的巨型中央服务器的编程语言

对于分布式系统领域，提供了海量的并行支持，开发效率更高

## 第一个go程序
第一个go程序，扩展名为<code>.go</code>：
```go
package main

import "fmt"

func main(){
    fmt.Println("Hello world!")
}
```
执行代码，输出
```
F:\workSpace\go>go run 01.go
Hello world!
```

# 安装测试
此部分跳过

# Go语言结构
## Go Hello World实例
基础组成部分包含以下：
+ 包声明
+ 引入包
+ 函数
+ 变量
+ 语句&表达式
+ 注释
```Go
package main
import "fmt"
func main(){
    /*这是我的第一个Go程序*/
    fmt.Println("Hello world!")
}
```
1. 第一行代码<code>package main</code>定义包名，必须在源文件中非注释第一行指明这个文件属于哪个包。package main表示一个独立可执行的程序，每个Go语言程序都应包含一个名为main的包；

2. 下一行<code>import "fmt"</code>告知Go编译器需要使用fmt包，fmt实现格式化输入输出的函数；

3. <code>func main()</code>是程序开始执行的函数。每个可执行程序都应该包含main函数，一般来说都是启动后的第一个函数（如有init()函数会先执行该函数）；

4. 下一行<code>/**/</code>注释，程序执行时会被忽视。注释包含行注释，块注释，注释不可嵌套调用；

5. 下一行<code>fmt.Println(...)</code>将字符串输出到控制台，并自动在最后加换行符<code>'\n'</code>；
6. 当标识符（常量、变量、函数名、类型、结构字段等）以一个大写字母开头，那么这种标识符可以被外部包的代码使用（客户端程序先导入包），这被称为导出（像面向对象语言中的public）；如果以小写字母开头，表明外部包不可见（像面向对象语言中的private）

## 执行Go语言程序
1. 打开编辑器，编写代码
2. 保存代码
3. 打开命令行，进入程序所在的目录
4. 输入命令 go run xxx.go 回车执行
5. 屏幕输出内容

# Go语言语法基础
## Go标记
Go语言可以由多个标记组成，包括关键字、标识符、常量、字符串、符号。如以下Go语句由6个标记组成：
```Go
fmt.Println("Hello world!")
```
6个标记是（每行一个）：
```Go
fmt
.
Println
(
"Hello world!"
)
```
## 行分隔符
+ Go程序中，一行代表一个语句结束
+ 语句无需以分号结尾，Go编辑器自动完成
+ 如果想在一行使用多个语句，则必须使用分号间隔，但是实际并不鼓励这种写法
## 注释

## 标识符
标识符用来命令变量、类型等程序实体。一个标识符就是一个或多个字母和数字、下划线组成的序列，但是不能以数字开头

有效的标识符
```Go
mahesh   kumar   abc   move_name   a_123
myname50   _temp   j   a23b9   retVal
```
无效标识符
```
1ab（以数字开头）
case（Go 语言的关键字）
a+b（运算符是不允许的）
```
## 关键字
下面列举了常用的25个关键字
||||||
| - | - | - | - | - |
|break|default|func|interface|select|
|case|defer|go|map|struct|
|chan|else|goto|package|switch |
|const|fall|through|if|range|type|
|continue|for|import|return|var|

除了上面的关键字，还有36个预定义标识符：
||||||||||
|-|-|-|-|-|-|-|-|-|
|append|bool|byte|cap|close|complex|complex64|	complex128|uint16|
|copy|false|float32|float64|	imag|	int|	int8|	int16|	uint32|
|int32|	int64|	iota|	len|	make|	new	|nil|	panic|	uint64|
|print|	println|	real|	recover|	string|	true|	uint|	uint8|	uintptr|

程序由关键字、常量、变量、运算符、类型和函数组成。

包含的分隔符有：<code>()、[]、{}</code>

标点：<code>.</code>、<code>,</code>、<code>;</code> 、<code>:</code>、<code>...</code>
## Go语言的空格
Go语言变量的声明必须以空格隔开，如：
```Go
var age int;
```
建议在变量和运算符之间用空格，使程序更加美观
```Go
fruit = apples + organes;
```

# Go语言数据类型
数据类型用于声明函数和变量
数据类型的出现是为了把数据分成所需内存大小不同的数据，编程的时候需要用大数据的时候才申请大内存，就可以充分利用内存

Go语言数据类型
|类型|描述|
|-|-|
|布尔型|值只可以是常量true或false。|
|数字类型|Go语言支持整型int和浮点型float，并且原生支持复数，其中位的运算采用补码|
|字符串类型|字符串就是一串固定长度字符连接起来的字符序列。Go的字符串是单个字节连接起来的，采用UTF-8编码标识Unicode文本|
|派生类型|（a）指针类型（Pointer）（b）数组类型（c）结构化类型（struct）（d）联合体类型（union）（e）函数类型（f）切片类型（g）接口类型（interface）（h）Map类型（i）Channel类型|

## 数字类型
也有基于架构的类型，如int、uint、uintptr。
|类型|描述|
|-|-|
|uint8|无符号8位整型（0到255）
|uint16|无符号 16 位整型 (0 到 65535)|
|uint32|无符号 32 位整型 (0 到 4294967295)|
|uint64|无符号 64 位整型 (0 到 18446744073709551615)|
|int8|有符号 8 位整型 (-128 到 127)|
|int16|有符号 16 位整型 (-32768 到 32767)|
|int32|有符号 32 位整型 (-2147483648 到 2147483647)|
|int64|有符号 64 位整型 (-9223372036854775808 到 9223372036854775807)|

|类型|描述|
|-|-|
|float32|IEEE-754 32位浮点型数|
|float64|IEEE-754 64位浮点型数|
|complex64|32位实数和虚数|
|complex128|64位实数和虚数|

## 其他数字类型
以下列出了其他更多的数字类型：

|类型|描述|
|-|-|	
|byte|类似 uint8|
|rune|类似 int32|
|uint|32 或 64 位|
|int|与 uint 一样大小|
|uintptr|无符号整型，用于存放一个指针|

# Go语言变量
变量来源于数学，在计算机中能够存储计算结果、表示抽象概念，变量通过变量名访问

Go变量名由字母、下划线、数字组成，首个字符不可以用数字

变量声明使用var关键字
# 变量声明
1. 指定变量类型，声明后不赋值，使用默认值
   ```Go
   var v_name v_type
   v_name = value
   ```
2. 根据值自行判断变量类型
   ```
   var v_name = value
   ```
3. 省略var，注意，:=左边的变量不可以是已经声明过的，否则会出现编译错误
   ```Go
   v_name := value
   ```
   例如
   ```
   var a int = 10
   var b = 10
   c := 10
   ```
实例如下：
```Go
package main
var a = "shouce.ren菜鸟教程"
var b string = "shouce.ren"
var c bool
 
func main(){
    println(a, b, c)
}
```
执行结果为
```
shouce.ren菜鸟教程 shouce.ren false
```
## 多变量声明
```Go
//类型相同的多个变量，非全局变量
var vname1,vname2,vname3 type
vname1, vname2, vname3 = v1, v2, v3

//和python很像，不需要显示声明类型，自动推断
var vname1, vname2, vname3 = v1, v2, v3

//出现在:=两侧的变量不应该已被声明，否则会编译错误
vname 1, vname2, vname3 :=v1, v2, v3

//类型不同的多个变量，全局变量，局部变量不可以使用这种方式
var (
    vname1 v_type1
    vname2 v_type2
)
```
实例如下:
```Go
package main
 
var x, y int
var (  //这种只能出现在全局变量中，函数体内不支持
    a int
    b bool
)
 
var c, d int = 1, 2
var e, f = 123, "hello"
 
//这种不带声明格式的只能在函数体中出现
//g, h := 123, "hello"
 
func main(){
    g, h := 123, "hello"
    println(x, y, a, b, c, d, e, f, g, h)
}
```
运行结果
```
0 0 0 false 1 2 123 hello 123 hello
```

## 值类型和引用类型
+ 所有像int、float、bool和string这些基本类型都属于值类型，使用这些类型的变量直接指向存在内存中的值：
(![](https://img-blog.csdnimg.cn/img_convert/393acd61667e3217dde38cf3a2182e59.png))
+ 当使用等号将一个变量的值赋值给另一个变量时，如：j=i，实际上是在内存中将i的值进行了拷贝，使用&i来获取变量<code>i</code>的地址，例如：0xf840000040（每次地址可能不一样）。值类型的变量存储在栈中。
![](https://img-blog.csdnimg.cn/img_convert/a3a7985b4db6cdc332e0ea918c892848.png)
+ 由于机器的存储器布局不同，不同机器的内存不同，甚至同一个程序在不同的机器上执行的内存地址也会不同
+ 更复杂的数据通常使用多个字，这些数据一般使用引用类型保存。
+ 一个引用类型的变量<code>r1</code>存储的是<code>r1</code>的值所在的内存地址（数字），或内存中第一个字所在的位置。
![](https://img-blog.csdnimg.cn/img_convert/2909081a2c1e325d3567f18311f85b5e.png)
+ 这个内存地址被称为指针，这个指针实际上也被存储在另外的某一个字中
+ 同一个引用类型的指针指向的多个字可以是在连续的内存地址中（内存布局是连续的），这是计算效率最高的存储形式；也可以将这些字分散存放在内存中，每个字都指示了下一个字的内存地址
+ 当使用赋值语句r2 = r1时，只有引用（地址）被复制
+ 如果r1的值被改变了，那么这个值的所有引用都会被指向修改后的内容，在此例子中，r2也会受到影响

## 简短形式，使用:=赋值操作符
+ 在变量的初始化时，声明语句写上var关键字实在有些多余，可以使用初始化声明<code>a := 50</code>或<code>b := false</code>。变量的类型将由编译器自动推断
+ 这是使用变量的首选形式，但是它只能使用在函数体内，而不可用于声明全局变量。
### 注意事项
如果在相同的代码块中，初始化声明不可以用于相同名称的变量，例如<code>a := 20</code>就不被运行，编译器会提示<code>no new variables on left side of :=</code>，而<code>a = 20</code>就可以，这是给变量赋新值

如果在变量定义之前使用它，会得到错误<code>undefined: a</code>

如果声明了一个<b>局部变量</b>却没有在相同的代码块中使用，也会报错<code>a declared and not used</code>，如：
```Go
func main() {
   var a string = "abc"
   fmt.Println("hello, world")
}
```
使用
```
fmt.Println("hello, world", a)
```
即可移除错误

但是<b>全局变量</b>允许声明不使用

同一类型的多个变量可以声明在同一行，如：
```Go
var a, b, c int
```
多变量可以在同一行进行赋值，如：
```Go
a, b, c = 5, 7, "abc"
```
上面这行假设了变量 a，b 和 c 都已经被声明，否则的话应该这样使用：
```Go
a, b, c := 5, 7, "abc"
```
右边的这些值以相同的顺序赋值给左边的变量，所以 a 的值是 5， b 的值是 7，c 的值是 "abc"。

这被称为<b>并行</b>或<b>同时</b>赋值

并行赋值也被用于一个函数返回多个返回值时，例如<code>val, err = func1(var1)</code>，这里的<code>val</code>和<code>err</code>通过调用函数<code>func1</code>得到。

如果想要交换两个变量的值，则可以简单地使用<code>a,b = b,a</code>

Go语言中必须使用所有被声明的变量，但有时你并不需要使用从一个函数得到的所有返回值

空白标识符<code>_</code>被用于抛弃值，如
```Go
_,b = 5,7
```
中，值5被抛弃

<code>_</code>实际上是一个只写变量，无法得到其值。


# Go语言常量
+ 常量是一个简单标识符，在程序运行时，不会被修改的量。
+ 常量中的数据类型只可以是布尔类型、数字型和字符串型
常量的定义格式：
```Go
const identifier [type] =value
```
可以省略说明符<code>[type]</code>，编译器会根据变量的值来判断类型
```go
显示类型定义 <font color = 'red'> const b string = "abc"
隐式类型定义 const b = "abc"
```
多个相同类型的声明可以写成
```go
const c_name1 c_name2 = value1, value2
```
以下实例演示常用的应用
```go
package main
import "fmt"
func main(){
    const LENGTH int = 10
    const WIDTH int = 5
    var area int 
    const a, b, c = 1, false, "str"//多重赋值
    area = LENGTH * WIDTH
    fmt.Printf(" 面积为: %d",area)
    println()
    println(a, b, c);
}
```
运行结果
```
面积为:50
1 false str
```
常量还可以用作枚举
```go
const(
    Unknow = 0
    Female = 1
    Male = 2
)
```
数字0、1、2分别表示性别、女性和男性

常量可以使用<code>len()，cap()，unsafe.Sizeof()</code>来计算表达式的值。常量表达式中，函数必须是内置函数，否则编译不过：
```go
package main
import "unsafe"
const (
    a = "abc"
    b = len(a)
    c = unsafe.Sizeof(a)
)
func  main()  {
	println(a,b,c)
}
```
运算结果
```
abc 3 16
```

# iota
itoa,特殊常量,可认为是一个可被编译器修改的常量

在每一个const关键字出现时，被重置为0，然后再下一个const出现之前，每出现一次iota，其所代表的数字会自动增加1。
iota 可以被用作枚举值：
```go
const (
    a = itoa
    b = itoa
    c = itoa
)
```
可以简写成
```
const (
    a = itoa
    b
    c 
)
```
## itoa用法
```go
import "fmt"
func main() {
    const (
            a = iota   //0
            b          //1
            c          //2
            d = "ha"   //独立值，iota += 1
            e          //等价于e = "ha"   iota += 1
            f = 100    //iota +=1
            g          //等价于g = 100  iota +=1
            h = iota   //7,恢复计数
            i          //8
    )
    fmt.Println(a,b,c,d,e,f,g,h,i)
}
```
运行结果
```go
0 1 2 ha ha 100 100 7 8
```
再看一个有趣的例子
```go
package main

import "fmt"
const (
	i = 1<<iota //首先itoa = 0, 运算i = 1<<0 即为1,iota运算完变为1
    j = 3<<iota //j = 3<<1 即为6, itoa运算完变为2
    k //等价于k = 3<<iota,此时itoa为2,k = 12, 完毕itoa = 3
    l //等价于k = 3<<iota,此时itoa为2,k = 24, 完毕itoa = 4
)
 
func main() {
	fmt.Println("i=",i)
	fmt.Println("j=",j)
	fmt.Println("k=",k)
	fmt.Println("l=",l)
}
```
```go
i=1 
j=6 
k=12 
l=24
```
注意
```go
<<n == *(2^n)
```
# Go语言运算符
运算符执行数学或逻辑运算
内置运算符:
+ 算数运算符
+ 关系运算符
+ 逻辑运算符
+ 位运算符
+ 赋值运算符
+ 其他运算符
## 算术运算符
|运算符	|描述	|实例|
|-|-|-|-|
|+	|相加|	A + B 输出结果 30|
|-|	相减	|A - B 输出结果 -10|
|*|	相乘	|A * B 输出结果 200|
|/	|相除	|B / A 输出结果 2|
|%|	求余	|B % A 输出结果 0|
|++|	自增|	A++ 输出结果 11|
|--|	自减|	A-- 输出结果 9|

实例:
```go
package main

import "fmt"

func main() {

   var a int = 21
   var b int = 10
   var c int

   c = a + b
   fmt.Printf("第一行 - c 的值为 %d\n", c )
   c = a - b
   fmt.Printf("第二行 - c 的值为 %d\n", c )
   c = a * b
   fmt.Printf("第三行 - c 的值为 %d\n", c )
   c = a / b
   fmt.Printf("第四行 - c 的值为 %d\n", c )
   c = a % b
   fmt.Printf("第五行 - c 的值为 %d\n", c )
   a++
   fmt.Printf("第六行 - a 的值为 %d\n", a )
   a=21   // 为了方便测试，a 这里重新赋值为 21
   a--
   fmt.Printf("第七行 - a 的值为 %d\n", a )
}
```
结果
```go
第一行 - c 的值为 31
第二行 - c 的值为 11
第三行 - c 的值为 210
第四行 - c 的值为 2
第五行 - c 的值为 1
第六行 - a 的值为 22
第七行 - a 的值为 20
```

## 关系运算符
假设<code>A = 10, B = 20</code>
|运算符	|描述	|实例|
|-|-|-|
|==|	检查两个值是否相等，如果相等返回 True 否则返回 False。	|(A == B) 为 False|
|!=	|检查两个值是否不相等，如果不相等返回 True 否则返回 False。	|(A != B) 为 True|
|>|	检查左边值是否大于右边值，如果是返回 True 否则返回 False。|	(A > B) 为 False|
|<|	检查左边值是否小于右边值，如果是返回 True 否则返回 False。	|(A < B) 为 True|
|>=|	检查左边值是否大于等于右边值，如果是返回 True 否则返回 False。	|(A >= B) 为 False|
|<=	|检查左边值是否小于等于右边值，如果是返回 True 否则返回 False。|	(A <= B) 为 True|

实例
```go
package main

import "fmt"

func main() {
   var a int = 21
   var b int = 10

   if( a == b ) {
      fmt.Printf("第一行 - a 等于 b\n" )
   } else {
      fmt.Printf("第一行 - a 不等于 b\n" )
   }
   if ( a < b ) {
      fmt.Printf("第二行 - a 小于 b\n" )
   } else {
      fmt.Printf("第二行 - a 不小于 b\n" )
   }
   
   if ( a > b ) {
      fmt.Printf("第三行 - a 大于 b\n" )
   } else {
      fmt.Printf("第三行 - a 不大于 b\n" )
   }
   /* Lets change value of a and b */
   a = 5
   b = 20
   if ( a <= b ) {
      fmt.Printf("第四行 - a 小于等于 b\n" )
   }
   if ( b >= a ) {
      fmt.Printf("第五行 - b 大于等于 a\n" )
   }
}
```
以上实例运行结果：
```go
第一行 - a 不等于 b
第二行 - a 不小于 b
第三行 - a 大于 b
第四行 - a 小于等于 b
第五行 - b 大于等于 a
```
## 逻辑运算符
下表列出了所有Go语言的逻辑运算符。假定<code>A = True, B = False</code>。

|运算符	|描述|	实例|
|-|-|-|
| && |	逻辑 AND 运算符。| 如果两边的操作数都是 True，则条件 True，否则为 False。	|(A && B) 为 False|
| \|\| | 逻辑 OR 运算符。| 如果两边的操作数有一个 True，则条件 True，否则为 False。	|(A || B) 为 True|
| ! |	逻辑 NOT 运算符。| 如果条件为 True，则逻辑 NOT 条件 False，否则为 True。|	!(A && B) 为 True|
以下实例演示了逻辑运算符的用法：

实例
```go
package main

import "fmt"

func main() {
   var a bool = true
   var b bool = false
   if ( a && b ) {
      fmt.Printf("第一行 - 条件为 true\n" )
   }
   if ( a || b ) {
      fmt.Printf("第二行 - 条件为 true\n" )
   }
   /* 修改 a 和 b 的值 */
   a = false
   b = true
   if ( a && b ) {
      fmt.Printf("第三行 - 条件为 true\n" )
   } else {
      fmt.Printf("第三行 - 条件为 false\n" )
   }
   if ( !(a && b) ) {
      fmt.Printf("第四行 - 条件为 true\n" )
   }
}
```
以上实例运行结果：
```go
第二行 - 条件为 true
第三行 - 条件为 false
第四行 - 条件为 true
```
## 位运算符
位运算符对整数在内存中的二进制位进行操作。
下表列出了位运算符<code> &, |,  ^ </code>的计算：
|p	|q	|p & q	|p \| q	|p ^ q|
|-|-|-|-|-|
|0	|0|	0|	0	|0|
|0	|1|	0|	1|	1|
|1	|1	|1	|1	|0|
|1|	0|	0	|1|	1|
假定其二进制数转换为：

Go 语言支持的位运算符如下表所示。假定<code> A = 60 (0011 1100); B = 13 (0000 1101); </code> ：

|运算符	|描述	|实例|
|-|-|-|
|&|	按位与运算符"&"是双目运算符。 其功能是参与运算的两数各对应的二进位相与。	|(A & B) 结果为 12, 二进制为 0000 1100|
|\||	按位或运算符"\|"是双目运算符。 其功能是参与运算的两数各对应的二进位相或|	(A \| B) 结果为 61, 二进制为 0011 1101|
|^|	按位异或运算符"^"是双目运算符。 其功能是参与运算的两数各对应的二进位相异或，当两对应的二进位相异时，结果为1。	|(A ^ B) 结果为 49, 二进制为 0011 0001|
|<<	|左移运算符"<<"是双目运算符。左移n位就是乘以2的n次方。 其功能把"<<"左边的运算数的各二进位全部左移若干位，由"<<"右边的数指定移动的位数，高位丢弃，低位补0。|A << 2 结果为 240 ，二进制为 1111 0000|
|>>|	右移运算符">>"是双目运算符。右移n位就是除以2的n次方。 其功能是把">>"左边的运算数的各二进位全部右移若干位，">>"右边的数指定移动的位数。|	A >> 2 结果为 15 ，二进制为 0000 1111|
以下实例演示了位运算符的用法：

实例
```go
package main

import "fmt"

func main() {

   var a uint = 60      /* 60 = 0011 1100 */  
   var b uint = 13      /* 13 = 0000 1101 */
   var c uint = 0          

   c = a & b       /* 12 = 0000 1100 */
   fmt.Printf("第一行 - c 的值为 %d\n", c )

   c = a | b       /* 61 = 0011 1101 */
   fmt.Printf("第二行 - c 的值为 %d\n", c )

   c = a ^ b       /* 49 = 0011 0001 */
   fmt.Printf("第三行 - c 的值为 %d\n", c )

   c = a << 2     /* 240 = 1111 0000 */
   fmt.Printf("第四行 - c 的值为 %d\n", c )

   c = a >> 2     /* 15 = 0000 1111 */
   fmt.Printf("第五行 - c 的值为 %d\n", c )
}
```
以上实例运行结果：
```go
第一行 - c 的值为 12
第二行 - c 的值为 61
第三行 - c 的值为 49
第四行 - c 的值为 240
第五行 - c 的值为 15
```
## 赋值运算符
下表列出了所有Go语言的赋值运算符。

|运算符	|描述	|实例|
|-|-|-|
|=	|简单的赋值运算符，将一个表达式的值赋给一个左值	C = A + B |将 A + B 表达式结果赋值给 C
|+=	|相加后再赋值|	C += A 等于 C = C + A|
|-=|	相减后再赋值|	C -= A 等于 C = C - A|
|*=|	相乘后再赋值	|C *= A 等于 C = C * A|
|/=|	相除后再赋值	|C /= A 等于 C = C / A|
|%=|	求余后再赋值	|C %= A 等于 C = C % A|
|<<=|	左移后赋值	|C <<= 2 等于 C = C << 2|
|>>=|	右移后赋值|	C >>= 2 等于 C = C >> 2|
|&=	|按位与后赋值	|C &= 2 等于 C = C & 2|
|^=	|按位异或后赋值|	C ^= 2 等于 C = C ^ 2|
|\|=	|按位或后赋值	|C \|= 2 等于 C = C \| 2|
以下实例演示了赋值运算符的用法：

实例
```go
package main

import "fmt"

func main() {
   var a int = 21
   var c int

   c =  a
   fmt.Printf("第 1 行 - =  运算符实例，c 值为 = %d\n", c )

   c +=  a
   fmt.Printf("第 2 行 - += 运算符实例，c 值为 = %d\n", c )

   c -=  a
   fmt.Printf("第 3 行 - -= 运算符实例，c 值为 = %d\n", c )

   c *=  a
   fmt.Printf("第 4 行 - *= 运算符实例，c 值为 = %d\n", c )

   c /=  a
   fmt.Printf("第 5 行 - /= 运算符实例，c 值为 = %d\n", c )

   c  = 200;

   c <<=  2
   fmt.Printf("第 6行  - <<= 运算符实例，c 值为 = %d\n", c )

   c >>=  2
   fmt.Printf("第 7 行 - >>= 运算符实例，c 值为 = %d\n", c )

   c &=  2
   fmt.Printf("第 8 行 - &= 运算符实例，c 值为 = %d\n", c )

   c ^=  2
   fmt.Printf("第 9 行 - ^= 运算符实例，c 值为 = %d\n", c )

   c |=  2
   fmt.Printf("第 10 行 - |= 运算符实例，c 值为 = %d\n", c )

}
```
以上实例运行结果：
```go
第 1 行 - =  运算符实例，c 值为 = 21
第 2 行 - += 运算符实例，c 值为 = 42
第 3 行 - -= 运算符实例，c 值为 = 21
第 4 行 - *= 运算符实例，c 值为 = 441
第 5 行 - /= 运算符实例，c 值为 = 21
第 6行  - <<= 运算符实例，c 值为 = 800
第 7 行 - >>= 运算符实例，c 值为 = 200
第 8 行 - &= 运算符实例，c 值为 = 0
第 9 行 - ^= 运算符实例，c 值为 = 2
第 10 行 - |= 运算符实例，c 值为 = 2
```
 ## 其他运算符
下表列出了Go语言的其他运算符。

|运算符	|描述	|实例|
|-|-|-|
|&|	返回变量存储地址|	&a; 将给出变量的实际地址。|
|*	|指针变量。|	*a; 是一个指针变量|
以下实例演示了其他运算符的用法：

实例
```go
package main

import "fmt"

func main() {
   var a int = 4
   var b int32
   var c float32
   var ptr *int

   /* 运算符实例 */
   fmt.Printf("第 1 行 - a 变量类型为 = %T\n", a );
   fmt.Printf("第 2 行 - b 变量类型为 = %T\n", b );
   fmt.Printf("第 3 行 - c 变量类型为 = %T\n", c );

   /*  & 和 * 运算符实例 */
   ptr = &a     /* 'ptr' 包含了 'a' 变量的地址 */
   fmt.Printf("a 的值为  %d\n", a);
   fmt.Printf("*ptr 为 %d\n", *ptr);
}
```
以上实例运行结果：
```go
第 1 行 - a 变量类型为 = int
第 2 行 - b 变量类型为 = int32
第 3 行 - c 变量类型为 = float32
a 的值为  4
*ptr 为 4
```
## 运算符优先级
有些运算符拥有较高的优先级，二元运算符的运算方向均是从左至右。下表列出了所有运算符以及它们的优先级，由上至下代表优先级由高到低：

|优先级|	运算符|
|-|-|
|5|	* / % << >> & &^|
|4	|+ - \| ^|
|3|	== != < <= > >=|
|2|	&&|
|1|	\|\||
当然，你可以通过使用括号来临时提升某个表达式的整体运算优先级。

以上实例运行结果：

实例
```go
package main

import "fmt"

func main() {
   var a int = 20
   var b int = 10
   var c int = 15
   var d int = 5
   var e int;

   e = (a + b) * c / d;      // ( 30 * 15 ) / 5
   fmt.Printf("(a + b) * c / d 的值为 : %d\n",  e );

   e = ((a + b) * c) / d;    // (30 * 15 ) / 5
   fmt.Printf("((a + b) * c) / d 的值为  : %d\n" ,  e );

   e = (a + b) * (c / d);   // (30) * (15/5)
   fmt.Printf("(a + b) * (c / d) 的值为  : %d\n",  e );

   e = a + (b * c) / d;     //  20 + (150/5)
   fmt.Printf("a + (b * c) / d 的值为  : %d\n" ,  e );  
}
```
以上实例运行结果：
```go
(a + b) * c / d 的值为 : 90
((a + b) * c) / d 的值为  : 90
(a + b) * (c / d) 的值为  : 90
a + (b * c) / d 的值为  : 50
```
# Go语言条件语句
条件语句:给定一个或多个语句,在测试条件为真的时候执行语句,条件为假的时候执行另外的语句.
[外链图片转存失败,源站可能有防盗链机制,建议将图片保存下来直接上传(img-OqB6pOuk-1605001227598)(https://i.loli.net/2020/09/18/1I4SpmUXHjNvhDo.jpg)]
Go语言中的条件语句
|语句 |描述|
|-|-|
|if|由一个布尔表达式后紧跟一个或多个语句组成|
|if-else|语句后使用可选的else语句,当条件语句为假时执行else后的语句|
|if嵌套|在 if 或 else if 语句中嵌入一个或多个 if 或 else if 语句|
|switch |	switch 语句用于基于不同条件执行不同动作
|select |	select 语句类似于 switch 语句，但是select会随机执行一个可运行的case。如果没有case可运行，它将阻塞，直到有case可运行|
<code>注意：Go 没有三目运算符，所以不支持 ?: 形式的条件判断。</code>

# Go语言循环语句
程序重复执行语句时使用.
![](https://img-blog.csdnimg.cn/img_convert/1cb2c88faba85b6ef3fa7dd5fee9b671.png)

Go 语言提供了以下几种类型循环处理语句：

|循环类型|	描述|
|-|-|
|for 循环|	重复执行语句块|
|循环嵌套|	在 for 循环中嵌套一个或多个 for 循环|

## 循环控制语句
可以控制循环体内的执行过程.

GO 语言支持以下几种循环控制语句：

|控制语句	|描述|
|-|-|
|break语句	|经常用于中断当前 for 循环或跳出 switch 语句|
|continue语句|	跳过当前循环的剩余语句，然后继续进行下一轮循环。|
|goto语句|	将控制转移到被标记的语句。|

## 无限循环
如果循环中条件语句永远不为 false 则会进行无限循环，我们可以通过 for 循环语句中只设置一个条件表达式来执行无限循环：

实例
```go
package main

import "fmt"

func main() {
    for true  {
        fmt.Printf("这是无限循环。\n");
    }
}
```

# Go语言函数
+ 函数是基本的代码块,用于执行一个任务
+ Go语言至少有一个<code>main()</code>函数
+ 通过函数划分功能,每个函数在逻辑上执行指定的任务
+ 函数声明告诉编译器函数名称、返回类型、参数
+ Go语言标准库提供多种可动用的内置函数。如<code>len()</code>可接受不同类型参数，返回该类型的长度。
  + 传入字符串，返回字符串长度
  + 传入数组，返回数组中包含的元素个数
## 函数定义
Go语言函数的定义格式：
```
func function_name( [parameter list] ) [return_types]{
    函数体
}
```
函数定义解析:
+ <code>func</code>:函数由func开始声明
+ <code>function_name</code>:函数名称,函数名称和参数列表组成函数签名
+ <code>parameter list</code>:参数列表,像一个占位符,当函数被调用时,可以将值传递给参数,值称为实际参数.参数列表指定的是参数类型、顺序、及参数个数。参数可选，可不调用参数
+ <code>return_types</code>：返回类型，当无需返回值时可选
+ 函数体：函数定义的代码集合

### 实例
以下实例为<code> max()</code> 函数的代码，该函数传入两个整型参数 <code>num1,num2</code>，并返回这两个参数的最大值：
```go
/* 函数返回两个数的最大值 */
func max(num1, num2 int) int {
   /* 声明局部变量 */
   var result int

   if (num1 > num2) {
      result = num1
   } else {
      result = num2
   }
   return result
}
```
## 函数调用
创建函数时,定义函数需要做什么,再通过调用该函数来执行指定任务

调用函数,向函数传递参数,并返回值:
```go
package main

import "fmt"

func main(){
    //定义局部变量
    var a int = 100
    var b int = 200
    var ret int 

    //调用函数并返回最大值
    ret = max(a, b)
    fmt.Printf("两个数的最大值是 : %d\n", ret)
}
//定义函数
func max(num1, num2 int) int{
    var result int
    if(num1 > num2){
        result = num1
    }else{
        result = num2
    }
    return result
}
```
以上实例在<code>main()</code>中调用<code>max()</code>函数,执行结果为
```
两个数的最大值是 : 200
```

## 函数返回多个值
go函数可以返回多个值
```go
package main
import "fmt"
func swap(x, y string)(string,string){
    return y, x
}

func main(){
    a, b := sawp("google", "runoob")
    fmt.Println(a, b)
}
```
```
runoob google
```
## 函数参数
+ 函数如果使用参数,使用的变量称为函数的形参
+ 形参就像定义在函数体内的局部变量
+ 调用函数,可以通过两种方式传递函数

|传递函数|描述|
|-|-|
|值传递|值传递是指在调用函数时将实际参数符值一份传递到函数中,这样在函数中对参数进行修改,不会影响实际参数|
|引用传递|引用传递指在调用函数时将实际参数的地址传递到函数中,那么在函数中对参数进行修改,会影响到实际参数|
## 函数用法
|函数用法|描述|
|-|-|
|函数作为另外一个函数的实参|函数定义后可作为另一个函数的实参传入|
|闭包|闭包是匿名函数,可在动态编程中使用|
|方法|方法就是一个包含了接收者的函数|

<br>

# Go语言变量作用域
作用域为已声明标识符所表示的常量、类型、变量、函数或包在源代码中的作用范围。

Go语言中变量在三个地方声明：
+ 函数内部定义的变量称为局部变量
+ 函数外定义的变量称为全局变量
+ 函数定义中的变量称为形式参数

## 局部变量
在函数内部定义的变量称为局部变量，它的作用域只在函数体内，参数的返回值也是局部变量。
以下示例使用了<code>a,b,c</code>：
```go
package main

import "fmt"

func main() {
   /* 声明局部变量 */
   var a, b, c int

   /* 初始化参数 */
   a = 10
   b = 20
   c = a + b

   fmt.Printf ("结果： a = %d, b = %d and c = %d\n", a, b, c)
}
```
以上实例执行输出结果为：
```go
a = 10, b = 20 and c = 30
```

## 全局变量
在函数体外声明的变量称为全局变量,全局变量可以在整个包甚至外部包(导出)使用.全局变量可在任何函数中使用

实例:
```go
package main

import "fmt"

/* 声明全局变量 */
var g int

func main() {

   /* 声明局部变量 */
   var a, b int

   /* 初始化参数 */
   a = 10
   b = 20
   g = a + b

   fmt.Printf("结果： a = %d, b = %d and g = %d\n", a, b, g)
```
结果:
```go
a = 10, b = 20 and g = 30
```
Go 语言程序中全局变量与局部变量名称可以相同，但是函数内的<b>局部变量</b>会被优先考虑。实例如下：
```go
实例
package main

import "fmt"

/* 声明全局变量 */
var g int = 20

func main() {
   /* 声明局部变量 */
   var g int = 10

   fmt.Printf ("结果： g = %d\n",  g)
}
```
以上实例执行输出结果为：
```go
g = 10
```
## 形式参数
形式参数作为函数的局部变量使用.实例:
```go
package main

import "fmt"

//声明全局变量
var a int = 20

func main(){
   //main函数中声明局部变量
   var a int = 10
   var b int = 20
   var c int = 0

   fmt.Printf("main()函数中 a = %d\n", a)
   c = sum(a, b)
   fmt.Printf("main()函数中 c = %d\n", c)
}
//定义函数-两数相加
func sum(a, b int) int {
   fmt.Printf("sum()函数中 a = %d\n", a)
   fmt.Printf("sun()函数中 c = %d\n", c)

   return a + b
}
```
结果
```
main()函数中 a = 10
sum()函数中 a = 10
sun()函数中 b = 20
main()函数中 c = 30
```
## 初始化变量和全局变量
不同类型的局部和全局变量默认值为:

|数据类型|初始化默认值|
|-|-|
|int|0|
|float32|0|
|pointer|nil|


<br>

# Go语言数组
+ Go语言数组提供了有关数组类型的数据结构
+ 数组是具有相同唯一类型的一组已编号且长度固定的数据项序列,这种类型可以是任意的原始类型例如整型、字符串或者自定义类型
+ 相对于去声明 <code>number0, number1, ..., number99 </code>的变量，使用数组形式 <code>numbers[0], numbers[1] ..., numbers[99]</code> 更加方便且易于扩展
+ 数组元素可以通过索引（位置）来读取（修改），第一个元素索引为0，第二个元素索引为1，以此类推

## 声明数组
Go语言数组声明需要指定元素类型和元素个数，语法格式如下：
```go
var variable_name [SIZE] variable_type
```
以上为一维数组的定义方式,例如以下定义了数组balance长度为10类型为float32
```go
var balance [10] float32
```
## 初始化数组
```go
var balabce = [5]float32{1000.0, 2.0, 3.4, 7.0, 50.0}
```
初始化数组中{}的元素个数不能大于[]中的数字

如果忽略[]中的数字不设置数组大小,Go语言会根据元素的个数来设置数组的大小:
```go
var balance = [...]float32{1000.0, 2.0, 3.4, 7.0, 50.0}
```
该实例与上面的实例一致:
```go 
balance[4] = 50.0
```
## 访问数组元素
数组元素可以通过索引(位置来访问).格式为数组名加中括号,中括号为索引的值,如:
```go
var salary float32 = balance[9]
```
以上实例读取数组balance的第10个元素值

以下演示数组完整操作:
```go
package main

import "fmt"

func main(){
   var n[10] int //这是一个长为10的数组
   var i, j int
   
   //为数组n初始化元素
   for i = 0; i < 10; i++{
      n[i] = i + 100
   }

   //输出每个元素的值
   for j = 0; j < 10; j++{
      fmt.Printf("element[%d] = %d\n",j, n[j])
   }
}
```
结果
```go
element[0] = 100
element[1] = 101
element[2] = 102
element[3] = 103
element[4] = 104
element[5] = 105
element[6] = 106
element[7] = 107
element[8] = 108
element[9] = 109
```
## 更多
|更多|描述|
|-|-|
|多维数组|Go 语言支持多维数组，最简单的多维数组是二维数组|
|向函数传递数组|你可以向函数传递数组参数|

# Go语言指针
+ 变量是一种方便的占位符,用于引用计算机内存地址.
+ Go语言的取地址符为 <code>&</code> ,放到一个变量前使用就会返回相应变量的内存地址.
实例:
```go
package main
import "fmt"
func main(){
   var a int = 10

   fmt.Printf("变量的地址: %x\n", &a)
}
```
输出结果:
```
变量的地址: c0000120b0
```
## 指针
+ 一个指针变量指向了一个值的内存地址
指针的声明格式:
```go 
var var_name *var_type
```
<code>var-type</code>是指针类型,<code>var_name</code>是指针变量名,<code>*</code>用于指定变量是作为一个指针.以下是有效的指针声明:
```go
var ip *int //指向整性
var fp *float32 //指向浮点型
```

## 使用指针
指针使用流程:
+ 定义指针变量
+ 为指针变量赋值
+ 访问指针变量中指向地址的值

在指针类型前面加上<code>*</code>来获取指针所指向的内容.

实例:
```go
package main

import "fmt"

func main() {
   var a int = 20   /* 声明实际变量 */
   var ip *int //声明指针变量

   ip = &a //指针变量的存储地址

   fmt.Printf("a变量的地址是:%x\n", &a)

   //指针变量存储的地址
   fmt.Printf("ip变量存储的指针地址:%x\n", ip)

   //使用指针访问值
   fmt.Printf("*ip变量的值:%d\n", *ip)
}
```
执行结果
```go
a 变量的地址是: c0000120b0
ip 变量储存的指针地址: c0000120b0
*ip 变量的值: 20
```
## Go空指针
+ 当指针被定义后未分配到任何变量时,它的值为<code>nil</code>
+ <code>nil</code>指针也称为空指针
+ <code>nil</code>在概念上与其他语言的<code>null</code>、<code>None</code>、<code>nil</code>、<code>NULL</code>一样,都指代空值或零值
+ 一个指针变量通常缩写为<code>ptr</code>
实例：
```go
package main

import "fmt"

func main(){
   var ptr *int

   fmt.Printf("ptr值为: %x\n", ptr)
}
```
结果
```go
ptr的值为: 0
```
空指针判断:
```
if(ptr != nil) //ptr不是空指针
if(ptr == nil) //ptr是空指针
```
## Go指针更多内容
|内容|描述|
|-|-|
|Go指针数组|定义一个指针来存放地址|
|Go指向指针的指针|Go支持指向指针的指针|
|Go向函数传递指针参数|通过引用或地址传参,在调用函数时可以改变其值|

# Go语言结构体
+ Go语言数组用于存储同一类型的数据,但是在结构体中我们可以为不同项定义不同的数据类型
+ 结构体由一系列具有相同或不同类型的数据构成的数据集合
+ 结构体表示一项纪录,比如存储图书馆的书籍记录,每本书有以下属性:
   + Title: 标题
   + Author: 作者
   + Subject: 学科
   + ID: 书籍ID
## 定义结构体
结构体的定义需要使用<code>type</code>和s<code>truct</code>语句,结构体中有一个或多个成员.<code>type</code>语句设定了结构体的名称.格式如下:
```go
type struct_variable_type struct{
   member definition
   member definition
   ...
   member definition
}
```
一旦定义了结构体类型,它就能用于变量的声明,格式如下:
```go
variable_name := struct_variable_type {calue1, value2..., valuen}
或
variable_name :=structure_variable_type { key: value1, key2: value2..., keyn: valuen}
```
实例:
```go
package main

import "fmt"

type Books struct{
   title string
   author string
   subject string
   book_id int
}

func main(){
   //创建一个新的结构体
   fmt.Println(Books{"Go语言", "www.runoob.com", "Go语言教程", 6495407})

   //也可以使用key => value的格式
   fmt.Println(Books{title: "Go语言", author:"www.runoob.com", subject:"Go语言教程", book_id:6495407})

   //忽略的字段为0或空
   fmt.Println(Books{title:"Go语言", author:"www.runoob.com"})
}
```
```go
{Go语言 www.runoob.com Go语言教程 6495407}
{Go语言 www.runoob.com Go语言教程 6495407}
{Go语言 www.runoob.com  0}
```
## 访问结构体成员
结构体类型变量使用<code>struct</code>关键字定义,如下:
```go
package main

import "fmt"

type Books struct{
   title string
   author string
   subject string
   book_id int
}

func main(){
   //声明Books类型变量
   var Book1 Books
   var Book2 Books

   //Book1描述
   Book1.title = "Go语言"
   Book1.author = "www.runoob.com"
   Book1.subject = "Go语言教程"
   Book1.book_id = 6495407

   //Book2描述
   Book2.title = "Python 教程"
   Book2.author = "www.runoob.com"
   Book2.subject = "Python 语言教程"
   Book2.book_id = 6495700

   //打印Book1信息
   printBook(Book1)

   //打印Book2信息
   printBook(Book2)
}

func printBook(book Books){
   fmt.Printf("Book title:%s\n", book.title)
   fmt.Printf("Book author:%s\n", book.author)
   fmt.Printf("Book subject:%s\n", book.subject)
   fmt.Printf("BooK book_id:%d\n", book.book_id)
}
```
结果
```go
Book title:Go语言
Book author:www.runoob.com
Book subject:Go语言教程
BooK book_id:6495407
Book title:Python 教程
Book author:www.runoob.com
Book subject:Python 语言教程
BooK book_id:6495700
```

## 结构体指针
定义结构体指针类似于其他指针变量,格式如下:
```go
var struct_pointer *Books
```
以上定义的指针变量可以存储结构体变量的地址.查看结构体变量地址,可以将<code>&</code>符号放在结构体前:
```go
struct_pointer = &Book1
```
使用结构体指针访问结构体成员,使用<code>.</code>操作符:
```go
struct_pointer.title
```
使用结构体指针重写以上实例:
```go
package main

import "fmt"

type Books struct {
   title string
   author string
   subject string
   book_id int
}

func main() {
   var Book1 Books        /* Declare Book1 of type Book */
   var Book2 Books        /* Declare Book2 of type Book */

   /* book 1 描述 */
   Book1.title = "Go 语言"
   Book1.author = "www.runoob.com"
   Book1.subject = "Go 语言教程"
   Book1.book_id = 6495407

   /* book 2 描述 */
   Book2.title = "Python 教程"
   Book2.author = "www.runoob.com"
   Book2.subject = "Python 语言教程"
   Book2.book_id = 6495700

   /* 打印 Book1 信息 */
   printBook(&Book1)

   /* 打印 Book2 信息 */
   printBook(&Book2)
}
func printBook( book *Books ) {
   fmt.Printf( "Book title : %s\n", book.title)
   fmt.Printf( "Book author : %s\n", book.author)
   fmt.Printf( "Book subject : %s\n", book.subject)
   fmt.Printf( "Book book_id : %d\n", book.book_id)
}
```
以上实例执行运行结果为：
```go
Book title : Go 语言
Book author : www.runoob.com
Book subject : Go 语言教程
Book book_id : 6495407
Book title : Python 教程
Book author : www.runoob.com
Book subject : Python 语言教程
Book book_id : 6495700
```

# Go语言切片
+ 切片是对数组的抽象
+ 数组的长度不可改变,在特定场景中这样的集合就不太适用,Go提供了一种灵活的、、功能强悍的内置类型切片("动态数组"),切片的长度不固定,可以追加元素,追加元素时容量增大.
## 定义切片
声明一个未指定大小的数组来定义切片:
```go
var identifier []type
```
切片不需要说明长度

或者使用<code>make</code>函数来创建切片
```go
var slice1 []type = make([]type, len)

//也可以简写为

slice1 := make([]type, len)
```
也可以指定容量，其中capacity为可选参数。
```go
make([]T, length, capacity)
```
这里 len 是数组的长度并且也是切片的初始长度。
## 切片初始化
```go
s := [] int {1, 2, 3}
```
直接初始化切片,<code>[]</code>表示是切片类型,<code>{1, 2, 3}</code>初始化值依次是1, 2, 3.其cap = len = 3
```go
s := arr[:]
```
初始化切片s,是数组arr的引用
```go
s := arr[startIndex:endIndex]
```
将arr中从下标startIndex到endIndex-1 下的元素创建为一个新的切片
```go
s := arr[startIndex:]
```
缺省endIndex时将表示一直到arr的最后一个元素
```go
s := arr[:endIdex]
```
缺省StartIndex时将表示一直到arr的第一个元素开始
```go
s1 := s[startIndex:endIndex]
```
通过切片s初始化切片s1
```go
s := make([]int, len, cap)
```
通过内置函数make()初始化切片s,[]int 标识为其元素类型为int的切片

## len()和cap()函数
+ 切片是可索引的,可由len()方法获取长度
+ cap()方法可测量切片最长可达到多少容量

实例:
```go
package main

import "fmt"

func main(){
    var numbers = make([]int,3,5)

    printSlice(numbers)
}

func printSlice(x []int){
    fmt.Printf("len=%d cap=%d slice=%v\n",len(x),cap(x),x)
}
```
结果
```go
len=3 cap=5 slice=[0 0 0]
```
## 空(nil)切片
切片在初始化之前默认为nil,长度为0
```go
package main

import "fmt"

func main() {
   var numbers []int

   printSlice(numbers)

   if(numbers == nil){
      fmt.Printf("切片是空的")
   }
}

func printSlice(x []int){
   fmt.Printf("len=%d cap=%d slice=%v\n",len(x),cap(x),x)
}

```
结果
```go
len=0 cap=0 slice=[]
切片是空的
```
## 切片截取
可以通过设置上下限来设置截取切片[lower-bound:upper-bound]
```go
func main(){
   //创建切片
   numbers := []int{0,1,2,3,4,5,6,7,8}
   printSlice(numbers)

   //打印原始切片
   fmt.Println("numbers ==", numbers)

   //打印子切片从索引1(包含)到索引4(不包含)
   fmt.Println("numbers[1:4] ==",numbers[1:4])

   //默认下限为0
   fmt.Println("numbers[:3] ==", numbers[:3])

   // 默认上限为 len(s)
   fmt.Println("numbers[4:] ==", numbers[4:])

   numbers1 := make([]int,0,5)
   printSlice(numbers1)

   // 打印子切片从索引  0(包含) 到索引 2(不包含)
   number2 := numbers[:2]
   printSlice(number2)

   // 打印子切片从索引 2(包含) 到索引 5(不包含) 
   number3 := numbers[2:5]
   printSlice(number3)
}

func printSlice(x []int){
   fmt.Printf("len=%d cap=%d slice=%v\n",len(x),cap(x),x)
}
```
结果
```go
len=9 cap=9 slice=[0 1 2 3 4 5 6 7 8]
numbers == [0 1 2 3 4 5 6 7 8]
numbers[1:4] == [1 2 3]
numbers[:3] == [0 1 2]
numbers[4:] == [4 5 6 7 8]
len=0 cap=5 slice=[]
len=2 cap=9 slice=[0 1]
len=3 cap=7 slice=[2 3 4]
```

## append()和copy()函数
如果想增加切片的容量,必须创建一个新的更大的切片并把原分片的内容都拷贝过来

下面的代码展示了从拷贝切片的<code>copy</code>方法和向切片追加新元素的<code>append</code>方法
```go
package main

import "fmt"

func main(){
   var numbers []int
   printSlice(numbers)

   //允许追加空切片
   numbers = append(numbers, 0)
   printSlice(numbers)

   //向切片添加一个元素
   numbers = append(numbers, 1)
   printSlice(numbers)

   //同时添加多个元素
   numbers = append(numbers, 2,3,4)
   printSlice(numbers)

   //创建切片numbers1是之前切片的两倍容量
   numbers1 := make([]int, len(numbers), (cap(numbers))*2)

   //拷贝numbers的内容到numbers1
   copy(numbers1, numbers)
   printSlice(numbers1)
}

func printSlice(x []int){
    fmt.Printf("len=%d cap=%d slice=%v\n",len(x),cap(x),x)
 }
 ```
 结果
```go
len=0 cap=0 slice=[]
len=1 cap=1 slice=[0]
len=2 cap=2 slice=[0 1]
len=5 cap=6 slice=[0 1 2 3 4]
len=5 cap=12 slice=[0 1 2 3 4]
```

# Go语言范围(Range)
Go语言中range关键字用于for循环中迭代数组(array)、切片(slice)、通道(channel)或集合(map)的元素.在数组和切片中它返回元素的索引和索引对应的值,在集合中返回key-value对

实例
```go
package main

import "fmt"

func main(){
   //使用range去求一个slice的和.
   nums := [] int {2,3,4}
   sum := 0
   for _, num := range nums{
       sum  += num
   }
   fmt.Println("sum:",sum)
   //在数组上使用range将传入index和值两个变量.上面的例子无需使用该元素的索引,因此使用空白符"_"省略了.
   for i, num := range nums{
       if num == 3{
                  fmt.Println("index",i)
       }
   }
   //range也可以使用在map的键值对上
   kvs := map[string]string{"a": "appple","b":"banana"}
   for k,v := range kvs{
       fmt.Printf("%s -> %s\n",k, v)
   }
   //range也可以用来枚举Unicode字符.第一个参数是字符的索引,第二个是字符Unicode本身
   for i, c := range "go"{
       fmt.Println(i, c)
   }
}
```
结果
```go
a -> appple
b -> banana
0 103
1 111
```

# Go语言Map(集合)
+ Map是一种无序的键值对的集合.Map最重要的一点是通过Key来快速检索数据,Key类似于索引,指向数据的值
+ Map是一种集合,所以我们可以像迭代数组和切片那样迭代它.不过,Map是无序的,无法确定其返回顺序,这是因为Map是使用hash表来实现的
## 定义Map
使用内建函数make或map关键字来定义Map
```go
//声明变量,默认map是nil
var map_variable map[key_data_type]value_data_type

//使用make函数
map_variable := make(map[key_data_type]value_data_type)
```
如果没初始化map,会创建一个nil map.nil map不可用存放键值对.
## 实例
下面实例演示了创建和使用map
```
package main

import "fmt"

func main(){
    //创建集合
    var countryCapitalMap map[string]string
    countryCapitalMap = make(map[string]string)

    //map插入key - value对,各个国家对应的首都
    countryCapitalMap ["France"] = "巴黎"
    countryCapitalMap ["Italy"] = "罗马"
    countryCapitalMap ["Japan"] = "东京"
    countryCapitalMap ["India"] = "新德里"

    //使用键值对输出地图值 
    for country := range countryCapitalMap{
        fmt.Println(country, "首都是",countryCapitalMap[country])
    }

    //检查元素是否存在
    //如果确定是真实的,则存在,否则不存在
    capital, ok := countryCapitalMap["American"]
    if(ok){
        fmt.Println("American的首都是", capital)
    }else{
        fmt.Println("American的首都不存在")
    }
}
```
运行结果
```go
France 首都是 巴黎
Italy 首都是 罗马
Japan 首都是 东京
India 首都是 新德里
American的首都不存在
```

## delete函数
delete函数用于删除集合的元素,参数为map和其对应的key.
```go
package main

import "fmt"

func main() {
	//创建map
	countryCapitalMap := map[string]string{"France": "Paris", "Italy": "Roma", "Japan": "Tokyo", "India": "New delhi"}

	fmt.Println("原始地图")
	//打印地图
	for country := range countryCapitalMap {
		fmt.Println(country, "首都是", countryCapitalMap[country])
	}

	//删除元素
	delete(countryCapitalMap, "France")

	fmt.Println("删除元素后地图")

	//打印地图
	for country := range countryCapitalMap {
		fmt.Println(country, "首都是", countryCapitalMap[country])
	}
}
```
运行结果
```go
原始地图
France 首都是 Paris
Italy 首都是 Roma
Japan 首都是 Tokyo
India 首都是 New delhi
删除元素后地图
Italy 首都是 Roma
Japan 首都是 Tokyo
India 首都是 New delhi
```

# Go语言递归函数
递归,就是在运行过程中调用自己

语法格式:
```go
func recursion(){
   //函数调用自身
   recursion()
}

func main(){
   recursion()
}
```
Go语言支持递归,但是在使用时,需要设置推出条件,否则会陷入无限循环

递归对于解决数学上的难题非常有效,例如阶乘、斐波那契数列等.
## 阶乘
```go
package main

import "fmt"

func main(){
    var i int = 15
    fmt.Printf("%d 的阶乘是 %d\n",i, Factorial(uint64(i)))
}

func Factorial(n uint64)(result uint64){
    if(n > 0){
        result = n * Factorial(n-1)
        return result
   }
   return 1
}
```
运行结果
```go
15 的阶乘是 1307674368000
```

## 斐波那契数列
以下实例通过Go语言的递归函数实现斐波那契数列
```go
package main

import "fmt"

func main(){
    var i int
    for i = 0; i < 10; i++{
        fmt.Printf("%d\t",fibonacci(i))
    }
}

func fibonacci(n int) int {
    if n < 2{
        return n
    }
   return fibonacci(n-1) + fibonacci(n-2)  
}
```
运行结果
```go
0       1       1       2       3       5       8       13      21      34
```

# Go语言类型转换
类型转换用于将一种数据类型的变量转换为另外一种类型的变量.

Go语言类型转换基本格式如下:
```go
type_name(expression)
```
<code>type_name</code>为类型,<code>expression</code>为表达式

实例
以下实例将整型数转换为浮点型,并计算结果,将结果赋值给浮点型变量:
```go
package main

import "fmt"

func main(){
    var sum int = 17
    var count int = 5
    var mean float32

    mean = float32(sum)/float32(count)
    fmt.Printf("mean的值为 %f\n",mean)
}
```
运行结果为
```go
mean的值为 3.400000
```

# Go语言接口
Go语言提供了一种数据类型即接口,将所有具有共性的方法定义在一起,任何其他类型只要实现了这些方法就是实现了这个接口

实例
```go
//定义接口
type interface_name interface{
    method_name1 [return_type]
    method_name2 [return_type]
    method_name3 [return_type]
    method_name4 [return_type]
}

//定义结构体
type struct_name struct{
    //
}

//实现接口方法
func (struct_name_variable struct_name) method1_name1() [return_type]{
    //方法实现
}
...
func (struct_name_variable struct_name) method_namen() [return_type] {

}
```
实例
```go
package main

import ("fmt")

type Phone interface{
    call()
}

type NokiaPhone struct{

}

func (nokiaPhone NokiaPhone) call(){
    fmt.Println("I am Nokia, I can call you")
}

type IPhone struct{

}

func (iPhone IPhone) call(){
    fmt.Println("I am iPhone, I can call you")
}

func main(){
    var phone Phone

    phone = new(NokiaPhone)
    phone.call()

    phone = new(IPhone)
    phone.call()
}
```
在上面的例子中,定义了一个接口<code>Phone</code>,接口里有一个方法<code>call()</code>.然后在<code>main</code>函数里定义了一个<code>Phone</code>类型变量,并分别为之赋值为<code>NokiaPhone</code>和<code>IPhone</code>.然后调用<code>call()</code>方法,输出结果如下:
```go
I am Nokia, I can call you
I am iPhone, I can call you
```

# Go语言错误处理
+ Go语言通过内置的错误接口提供了非常简单的错误处理机制
+ error类型是一个接口类型,打印如下
```go
type error interface{
   Error() string
}
```
可以在编码中实现error接口类型来生成错误信息

函数通常在最后的返回值中,返回错误信息.使用<code>errors.New</code>可返回一个错误信息
```go
func Sqrt(f float64) (float64, error){
   if f < 0{
      return 0, errors.New("math: square root of negative number")
   }
   //实现
}
```
在下面的例子中,调用Sqrt的时候传递一个负数,然后就得到了non-nil的error对象,将此对象与nil比较,结果为true,所以fmt.Println(fmt包在处理error时会调用Error方法)被调用,以输出错误,调用代码:
```go
result, err := Sqrt(-1)

if err != nil{
   fmt.Println(err)
}
```
实例
```go
package main
import (
    "fmt"
)

//定义一个DivideError结构
type DivideError struct{
     dividee int
     divider int
}

//实现'error'接口
func (de *DivideError) Error() string{
    strFormat := `
    Cannot proceed, the divider is zero.
    dividee: %d
    divider: 0
    `
    return fmt.Sprintf(strFormat, de.dividee)
}

//定义'int'类型除法运算的函数
func Divide(varDividee int, varDivider int)(result int, errorMsg string){
    if varDivider == 0{
        dData := DivideError{
            dividee: varDividee,
            divider: varDivider,
        }
        errorMsg = dData.Error()
        return 
    } else {
        return varDividee / varDivider, ""
    }
}

func main(){
    //正常情况
    if result, errorMsg := Divide(100, 10); errorMsg == ""{
        fmt.Println("100 / 10 = ",result)
    }
    //当除数为0时会返回错误信息
    if _,errorMsg := Divide(100, 0); errorMsg != ""{
        fmt.Println("errorMsg is: ",errorMsg)
    }
}
```
运行结果
```go
100 / 10 =  10
errorMsg is:
    Cannot proceed, the divider is zero.
    dividee: 100
    divider: 0
```

# Go并发
Go语言支持并发,通过go关键字开启goroutine即可

goroutine是轻量级线程,goroutine的调度是由Golang运行时进行管理的

goroutine语法格式:
```go
go 函数名( 参数列表 )
```
例如:
```go
go f( x, y, z )
```
开启一个新的goroutine:
```go
f(x, y, z)
```
Go允许使用go语句开启一个新的运行期线程,即goroutine,以一个不同的、新创建的goroutine来执行一个函数.同一个程序中的所有goroutine共享一个地址空间.
```go
package main

import (
    "fmt"
    "time"
)

func main(){
    go say("world\n")
    say("hello\n")
}

func say(s string){
    for i := 0; i < 5; i++{
        time.Sleep(100 * time.Millisecond)
        fmt.Printf(s)
    }
}
```
执行代码,可以发现输出结果没有固定先后顺序.因为这是两个goroutine在执行:
```go
hello
world
hello
world
world
hello
hello
world
hello
```

# 通道
通道(channel)是用来传递数据的一个数据结构

通道可用于两个goroutine之间传递一个指定类型的值来同步运行和通讯.操作符<code><-</code>用于指定通道的方向,发送或接收.如果未指定方向,则为双向通道.
```go
ch <- v //把v发送到通道ch
v := <- ch //从ch接收数据,并把值赋给v
```
声明一个通道很简单,使用<code>chan</code>关键字即可,通道在使用前必须先创建
```go
ch := make(chan int)
```
<b>注意</b>: 在默认情况下,通道是不带缓冲区的.发送端发送数据,同时必须有接收端接收相应的数据.

以下实例通过两个goroutine来计算数字之和,在goroutine完成计算后,它会计算两个结果的和:
```go
package main

import "fmt"
func main(){
    s := []int {7,2,8,-9,4,0}

    c := make(chan int)
    go sum(s[:len(s)/2], c)
    go sum(s[len(s)/2:], c)
    x, y := <-c, <-c //从通道c中接收

    fmt.Println(x,y,x+y)
}

func sum(s []int, c chan int){
    sum := 0
    for _, v := range s{
        sum += v
    }
    c<- sum //把sum发送到通道c
}
```
运行结果为:
```go
-5 17 12
```
## 通道缓冲区
通道可以设置缓冲区，通过 make 的第二个参数指定缓冲区大小：
```go
ch := make(chan int, 100)
```
+ 带缓冲区的通道允许发送端的数据发送和接收端的数据接收处于异步状态,就是说发送端发送的数据可以放在缓冲区里面,等待接收端去获取数据,而不是立刻需要接收端去获取数据.

+ 不过由于缓冲区的大小是有限制的,所以还是必须要有接收端来接收数据的,否则缓冲区一满,发送端就无法再发送数据了

+ 注意:如果通道不带缓冲,发送方会阻塞直到接收方从通道中获取了数据.如果通道带缓冲,发送方则会阻塞直到发送的值被拷贝到缓冲区内;如果缓冲区已满,则意味着需要等待直到某个接收方获取到一个值.接受方在有值可以接收之前会一直阻塞

```go
package main

import "fmt"

func main(){
    //这里定义了一个可以存储整数类型的带缓冲通道
    //缓冲区大小为2
    ch := make(chan int, 2)
    
    //因为ch是带缓冲的通道,我们可以同时发送两个数据
    //而不用立即需要去同步数据
    ch <- 1
    ch <- 2

    //获取这两个数据
    fmt.Println(<-ch)
    fmt.Println(<-ch)
}
```
运行结果:
```go
1
2
```
## Go遍历通道与关闭通道
Go通过range关键字来实现遍历读取到的数据,类似于数组或切片
```Go
v, ok := <- ch
```
如果通道接收不到数据后ok就为false,这时通道就可以使用close()函数来关闭

实例
```go
package main

import (
        "fmt"
)

func fibonacci(n int, c chan int) {
        x, y := 0, 1
        for i := 0; i < n; i++ {
                c <- x
                x, y = y, x+y
        }
        close(c)
}

func main() {
        c := make(chan int, 10)
        go fibonacci(cap(c), c)
        // range 函数遍历每个从通道接收到的数据，因为 c 在发送完 10 个
        // 数据之后就关闭了通道，所以这里我们 range 函数在接收到 10 个数据
        // 之后就结束了。如果上面的 c 通道不关闭，那么 range 函数就不
        // 会结束，从而在接收第 11 个数据的时候就阻塞了。
        for i := range c {
                fmt.Println(i)
        }
}
```
结果
```go
0
1
1
2
3
5
8
13
21
34
```
