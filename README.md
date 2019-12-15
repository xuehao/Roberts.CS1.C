# Roberts.CS1.C

Library sources for the book, *The Art and Science of C*.

## How to build the library? 如何编译库文件？

1. Download this repo to your folder. 下载该仓库到个人电脑。

    ```shell
    $ git clone https://github.com/xuehao/Roberts.CS1.C.git
    ```

2. Switch to the folder `cslib`. 进入 `cslib` 文件夹。

    ```shell
    $ cd Roberts.CS1.C && cd cslib
    ```

3. Use `make` to build the library. 执行 `make` 命令，生成库文件。

    ```shell
    $ make
    ```

    If succeed, you'll find a folder call `root`. 如果成功，此时会生成一个 `root` 文件夹。

4. Copy the `root` folder to your home directory. 复制 `root` 文件到个人目录。

    ```shell
    $ mv root ~
    ```

## How to connect the library? 如何连接库文件？

Using the general `Makefile` in the `test-cslib` folder to build the `house.c` program and to see how to connect the library. 使用 `test-cslib` 中的通用 `Makefile` 文件编译 `house.c` 测试程序，看看如何连接库文件。

```shell
$ cd .. && cd test-cslib
$ make house
$ ./house
```

This will produce a data file called `graphics.ps`. 此时会生成名为 `graphics.ps` 的数据文件。
