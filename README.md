# Roberts.CS1.C

Library source code for the Eric Roberts texts, *The Art and Science of C: A Library-Based Approach* and *Programming Abstractions in C: A Second Course in Computer Science*.

**《C语言的科学和艺术》** 与 **《C程序设计的抽象思维》** 两本书用到的库。

## How to build the library? 如何编译库文件？

Follow these steps to build a personal root system which don't need system permission and a static library called `libcs.a` for the upper two books.

按如下步骤，创建一个个人 `root` 系统（避免系统权限）以及两本书中用到的 `libcs.a` 静态库。

Download this repo to your folder.

下载该仓库到个人电脑。

```shell
$ git clone https://github.com/xuehao/Roberts.CS1.C.git
```

Switch to the folder `cslib`. Use `make` to build the library.

进入 `cslib` 文件夹。执行 `make` 命令，生成库文件。

```shell
$ cd Roberts.CS1.C && cd cslib
$ make
```

If succeed, you'll find a folder called `root`. Copy the `root` folder to your home directory.

如果成功，此时会生成一个 `root` 文件夹。复制 `root` 文件到个人目录。

```shell
$ mv root ~
```

## How to connect the library? 如何连接库文件？

Package all the options for the compiler and the linker used while building the C program into the general `Makefile`.

把构建C程序用到的编译器选项和连接器选项打包放进通用 `Makefile` 中。

```
CC = gcc
CFLAGS = -I${HOME}/root/include/cs -g -Wall -std=gnu11 -O3
LDLIBS = -L${HOME}/root/lib/ -lcs -lm
```

Use the general `Makefile` in the `test-cslib` folder to build the `house.c` program and to see how to connect the library.

使用 `test-cslib` 中的通用 `Makefile` 文件编译 `house.c` 测试程序，看看如何连接库文件。

```shell
$ cd .. && cd test-cslib
$ make house
$ ./house
```

This will produce a data file called `graphics.ps`.

此时会生成名为 `graphics.ps` 的数据文件。
