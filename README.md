# busybox-newlib
Qiu zihao's busybox for NSCSCC 2018

## 内容
包含库文件和代码文件两大部分。
库文件包括libc（即newlib），libos（封装所需的系统调用），myterm（封装所需的有关terminal的结构体定义及接口函数），编译后可以获得三个静态链接库。
代码文件及主目录下的busybox.c以及prog目录下的各个子程序，如vi，seq等。

## 编译
首先要先下载navy-apps，并且设置环境变量NAVY_HOME。
之后在主目录下make即可。

## 使用
目前包含如下子程序：
> cat  
> echo  
> grep  
> ls  
> seq  
> vi  
> wc  
使用方式： ./busybox [程序名] {相关参数}
