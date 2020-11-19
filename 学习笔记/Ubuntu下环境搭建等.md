[官网](https://golang.org)

[安装指示](https://golang.org/doc/install)

存在的问题：
折腾了一晚上，/usr/local下新建了个Go文件夹，将下载的Go压缩包解压到Go下面
在根目录下.profile文件中加入GOROOT和GOPATH路径后，终端运行go env一直显示未安装go

ps:
/home/username/.profile、/home/username/.bashrc/etc/profile的区别

排查半天，对照官方文档才发现不需要自己新建一个Go文件夹，直接解压到/usr/local路径下即可

长时间不学ubuntu连路径都搞错了。。。

安装完键入go env有输出即正确安装，接下来在visual studio code中安装go插件，需要科学上网，以及设置一下代理，即可正确安装。
```
go env -w GOSUMDB=off
go env -w GOPROXY=https://goproxy.cn,direct
```
