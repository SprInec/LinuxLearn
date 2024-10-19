# README

 Linux learning record.

[TOC]

## 开发环境

- **PC 端系统**：Windows 11

- **虚拟机软件**：VMWare Workstation 17 Pro
    - **虚拟机系统**：Ubuntu 20.04

- **远程登陆工具**：Tabby 1.0.215
- **IDE**：Visual Studio Code
- **Markdown 编辑工具**：Typora 1.9.5
- **版本控制系统**：Git
- **代码托管平台**：GitHub

- **Linux 开发板**：LubanCat 4

    <img src=".assets/image-20241019134854554.png" alt="image-20241019134854554" style="zoom: 25%;" />

    - **核心**：Rockchip RK3588S

    - **装载系统**：Ubuntu 22.04.3 LTS (GNU/Linux 5.10.160-rockchip aarch64)

    - **硬件标注**：

        - 正面视图

        <img src=".assets/image-20241019135758100.png" alt="image-20241019135758100" style="zoom: 33%;" />

        - 背面视图

        <img src=".assets/image-20241019135831061.png" alt="image-20241019135831061" style="zoom:33%;" />



## 一. VMWare 虚拟机安装

>  **所选系统：** Ubuntu 20.04
>
>  **VMware 版本：** Workstation 17 Pro
>
>  **参考博客：** [VMware虚拟机安装Ubuntu20.04详细图文教程](https://blog.csdn.net/weixin_41805734/article/details/120698714)

### 1. 系统镜像下载

[Ubuntu 20.04.6](https://releases.ubuntu.com/focal/)

![image-20241015171609242](.assets/image-20241015171609242.png)

### 2. VMWare 安装 Ubuntu

#### 2.1 新建虚拟机及其相关配置

![image-20241015173140848](.assets/image-20241015173140848.png)

<img src=".assets/image-20241015173308622.png" alt="image-20241015173308622" style="zoom:67%;" />

<img src=".assets/image-20241015173347136.png" alt="image-20241015173347136" style="zoom:67%;" />

<img src=".assets/image-20241015173534299.png" alt="image-20241015173534299" style="zoom:67%;" />

<img src=".assets/image-20241015173817106.png" alt="image-20241015173817106" style="zoom:67%;" />

<img src=".assets/image-20241015173838885.png" alt="image-20241015173838885" style="zoom:67%;" />

<img src=".assets/image-20241015173942891.png" alt="image-20241015173942891" style="zoom:67%;" />

<img src=".assets/image-20241015174056001.png" alt="image-20241015174056001" style="zoom:67%;" />

<img src=".assets/image-20241015174142025.png" alt="image-20241015174142025" style="zoom:67%;" />

<img src=".assets/image-20241015174204587.png" alt="image-20241015174204587" style="zoom:67%;" />

<img src=".assets/image-20241015174222456.png" alt="image-20241015174222456" style="zoom:67%;" />

<img src=".assets/image-20241015174300471.png" alt="image-20241015174300471" style="zoom:67%;" />

<img src=".assets/image-20241015174348461.png" alt="image-20241015174348461" style="zoom:67%;" />

<img src=".assets/image-20241015174407728.png" alt="image-20241015174407728" style="zoom:67%;" />

<img src=".assets/image-20241015174447361.png" alt="image-20241015174447361" style="zoom: 67%;" />

<img src=".assets/image-20241015175040888.png" alt="image-20241015175040888" style="zoom: 50%;" />

<img src=".assets/image-20241015175109167.png" alt="image-20241015175109167" style="zoom:67%;" />

#### 2.2 Ubuntu系统安装

##### 2.2.1 启动虚拟机

![image-20241015175141784](.assets/image-20241015175141784.png)

![image-20241015182746252](.assets/image-20241015182746252.png)

##### 2.2.2 语言及键盘配置

![image-20241015182915525](.assets/image-20241015182915525.png)

![image-20241015182945899](.assets/image-20241015182945899.png)



##### 2.2.3 Ubuntu 显示分辨率调整

新启动的 Ubuntu 系统可能显示区域大小与 VMWare 窗口不匹配，通过以下方法调整。

1. 先退出安装窗口

![image-20241015183039060](.assets/image-20241015183039060.png)

![image-20241015183057778](.assets/image-20241015183057778.png)2. 右上角打开设置页面

![image-20241015183155866](.assets/image-20241015183155866.png)

3. 找到显示器选项，更改为任意分辨率即可

![image-20241015183259821](.assets/image-20241015183259821.png)

##### 2.2.4 继续完成安装

![image-20241015184400043](.assets/image-20241015184400043.png)

![image-20241015184438735](.assets/image-20241015184438735.png)

![image-20241015184458720](.assets/image-20241015184458720.png)

![image-20241015184512214](.assets/image-20241015184512214.png)

![image-20241015184538828](.assets/image-20241015184538828.png)

![image-20241015184612056](.assets/image-20241015184612056.png)

![image-20241015184639294](.assets/image-20241015184639294.png)

![image-20241015184757891](.assets/image-20241015184757891.png)

![image-20241015184851206](.assets/image-20241015184851206.png)

![image-20241015190050285](.assets/image-20241015190050285.png)

重启后会停留在一个黑屏页面，显示一串英文 “Please remove ... , then press ENTER”，直接按回车键即可。

耐心等待重启后即可进入登陆页面，选中自己的账户，输入之前设置的密码，然后回车

![image-20241015190651003](.assets/image-20241015190651003.png)

显示以下界面即安装成功。

![image-20241015191018036](.assets/image-20241015191018036.png)

![image-20241015191036683](.assets/image-20241015191036683.png)

![image-20241015191051773](.assets/image-20241015191051773.png)

![image-20241015191105261](.assets/image-20241015191105261.png)

![image-20241015191130294](.assets/image-20241015191130294.png)

![image-20241015191506430](.assets/image-20241015191506430.png)

#### 2.3 更改 Ubuntu 软件源

Ubuntu 默认使用国外软件源，将其更改为国内软件源可提高下载速度

![image-20241015192610213](.assets/image-20241015192610213.png)

![image-20241015192729485](.assets/image-20241015192729485.png)

![image-20241015192759432](.assets/image-20241015192759432.png)

![image-20241015192832004](.assets/image-20241015192832004.png)

![image-20241015192845500](.assets/image-20241015192845500.png)

### 3. 设置共享文件夹

#### 3.1 添加共享文件夹

左上菜单栏找到 虚拟机 -> 设置，打开设置页面

<img src=".assets/image-20241015194843795.png" alt="image-20241015194843795"  />

<img src=".assets/image-20241015195052975.png" alt="image-20241015195052975" style="zoom: 67%;" />

点击添加后，根据引导完成设置即可。

#### 3.2 访问共享文件夹

**共享文件夹挂载位置：** `/mnt/hgfs`

1. 列出全部已共享文件夹 `ls /mnt/hgfs`

```shell
sprinec@sprinec-virtual-machine:/$ ls /mnt/hgfs
LinuxLearn
```

2. 进入共享文件夹

```shell
cd /mnt/hgfs/LinuxLearn
```

3. 复制虚拟机中文件到共享文件夹

```shell
cp -Rf /home/database/* /mnt/hgfs/LinuxLearn
```



## 二. Linux 基础与应用开发

> **参考书籍：** [[野火]《Linux基础与应用开发实战指南—基于LubanCat-RK系列板卡》](https://doc.embedfire.com/linux/rk356x/linux_base/zh/latest/index.html)
>
> **使用板卡：** LubanCat 4 RK3588S
>
> **装载系统**：Ubuntu 22.04.3 LTS (GNU/Linux 5.10.160-rockchip aarch64)

### 1. 配置网络

#### 1.1 WIFI连接

需配合 USB 无线网卡或者 Mini PCIe 接口的网卡使用，若 USB 无线网卡不是免驱版则与 Mini PCIe 网卡一样，可能需要安装其对应的驱动才可使用。硬件准备好后在 Ubuntu 桌面右上角点击找到 WIFI 连接选择连接的网络输入密码连接即可。

- 免驱 USB 无线网卡

    <img src=".assets/ed628f4cd84245cd36193aea5a0598b.jpg" alt="ed628f4cd84245cd36193aea5a0598b" style="zoom: 50%;" />

- inter5100AGN Mini PCIe 网卡 ( [驱动文件](./drivers/inter5100AGN Driver) / [驱动安装指南](./drivers/inter5100AGN Driver/README.md) )

    <img src=".assets/0a67ffb28eff17889622b9cf259ae5b.jpg" alt="0a67ffb28eff17889622b9cf259ae5b" style="zoom: 50%;" />

#### 1.2 网口连接

网线连接后 PC 端需进行配置共享网络

1. 打开设置，选择网络和 Internet ，按照下图指示进入高级网络设置页面

![image-20241016200053306](.assets/image-20241016200053306.png)

2. 选择 PC 端需共享的网络

![image-20241016200302382](.assets/image-20241016200302382.png)

3. 按如图所示操作，家庭网络连接项选择 Linux 板卡所连接的网络端口即可

<img src=".assets/image-20241016200526309.png" alt="image-20241016200526309" style="zoom: 67%;" />

配置好 WIFI 或者网口的任意网络后，可使用以下命令查看板卡 IP 地址，从而在 PC 端进行 ssh 连接：

```bash
ifconfig
```

- 有线网口显示为 `ethx` ，x 为 0，1， 2 ...

- USB 无线网卡一般显示为 `wlanx` ，x 为 0，1， 2 ...
- Mini PCIe 接口网卡一般显示为网卡的驱动型号，如 `wlp4p65s0`

`inet` 后面跟的 xxx.xxx.xxx.xxx 即为板卡 IP 地址。

#### 1.3 配置 SSH 连接

Windows 10 及更高版本系统自带 OpenSSH 客户端，需要确保 Linux 端已经安装 OpenSSH 服务器，可通过以下命令安装：

```bash
sudo apt update
sudo apt install openssh-server
```

安装后启动 SSH 服务：

```bash
sudo systemctl start ssh
sudo ststemctl enable ssh
```

检查 SSH 服务状态，确保其运行正常:

```bash
sudo systemctl status ssh
```

如有需要可能还需配置防火墙，确保服务器的防火墙允许 SSH 流量，通常 SSH 使用端口 22，可以使用以下命令打开端口：

```bash
sudo ufw allow ssh
```

然后即可通过命令 `ssh username@server_ip` 从客户端连接到板卡/虚拟机/服务器了，也可通过 Tabby、MobaXterm、PuTTY、electerm、FinalShell、Hyper、SecureCRT、Termius 或是安装了 Remote SSH 插件的 VScode 进行 SSH 远程连接。

比较推荐 [Tabby](https://github.com/Eugeny/tabby)、[Termius](https://termius.com/) 和安装了 Remote SSH 插件的 VScode。其中若想给 VSCode 配置 SSH 免密远程登陆可查看 **OTHER - [VSCode 配置 SSH 免密远程登陆](###VSCode 配置 SSH 免密远程登陆)** 。

- Tabby

    ![image-20241019155857626](.assets/image-20241019155857626.png)

- Termius

    ![image-20241019155820943](.assets/image-20241019155820943.png)

- VSCode Remote SSH

    ![image-20241019160205553](.assets/image-20241019160205553.png)

### 2. Linux 命令行

**命令的格式：** `command [-options] [argument]`

#### 2.1 常用命令

- `ls` ：列出当前目录的文件
    - `ls [目录名]` ：列出其他文件的目录
    - `-a` ：显示所有文件及目录 (ls 内定将文件名或目录名称开头为 “ . ” 的视为隐藏档，不会列出)
    - `-l` ：除文件名称外，将文件型态、权限、拥有者、文件大小等信息详细列出
    - `-t` ：将文件依建立时间之先后次序列出
    - `-A` ：同 -a ,但不列出 “ . ” (当前目录) 及 “ .. ” (父目录)
    - `-R` ：若目录下有文件，则该目录下的文件也会列出，即递归显示
    
- `pwd` ：列出当前目录的位置

- `cd` ：切换到家目录
    - `cd [目录名]` ：切换到指定目录
    - `cd -` ：切换上次切换的目录
    - `cd ~` ：切换到家目录
    - `cd ..` ：切换上一层目录
    - `cd /` ：切换到根目录
    
- `mkdir [name]` ：创建名为 name 的文件夹
    - `-p [name1/name2]` ：递归创建
    
- `touch [name1, name2, ...]` ：更新/创建多个文件，命名分别为 name1, name2, ...

    `touch` 有两个功能：

    1. 把已存在文件的时间标签更新为系统当前的时间（默认方式）它们的数据将原封不动地保留下来.
    2. 用来创建新的空文件。

- `cp -r a b` ：复制 *a* 文件夹重命名为 *b*

    - `-R/r` ：递归处理

- `rm [-option] [一个或多个文件/文件夹名]` ：删除一个或多个文件或目录
    - `-R/r` ：递归处理
    - `-i` ：删除文件或文件夹前，终端会逐一询问确认
    - `-f` ：忽略不存在的文件，无需逐一确认

- `which [xxx]` ：查找并显示给定命令的绝对路径

- `echo` ：输出指定的字符串或者变量

- `cat [文件名]` ：连接多个文件并打印到标准输出

- `>`，`>>` ：输出重定向到文件
    - `命令 > 文件名` ：直接用输出覆盖原文件
    - `命令 >> 文件名` ：把输出追加到原文件的末尾

- `su [用户名]` ：用于切换用户

- `clear` ：清除当前屏幕终端上的任何信息

- `reboot` ：系统重启

- `poweroff` ：系统关机

- `chmod` ：用来变更文件或目录的权限



- `df` ：显示磁盘的相关信息
    - `-h` ：以可读性较高的方式来显示信息

- `id` ：查看当前用户的 UID 值



- `sudo` ：管理员权限
    - `sudo !!` ：使用 sudo 权限重新执行上一条指令
- `sudo apt update` ：更新软件
- `sudo apt upgrade` ：安装更新的软件
- `sudo apt install xxx` ：软件安装
- `sudo apt remove xxx` ：软件卸载

#### 2.2 其他软件

- `sudo nmtui` ： WiFi 连接图形化配置

### 3. 快捷键

#### Ubuntu 系统快捷键

- `Ctrl + Alt + t` ：打开终端（桌面系统适用）
- `Ctrl + c` ：取消输入的命令/中止命令

### 4. 用户与文件

#### 4.1 用户及用户组

在 Linux 中,每个用户都有一个特定的编号——UID，用于标识一个系统用户。

可通过 `id` 命令查看当前用户的 UID 值。

```bash
id
```

![image-20241016221844562](.assets/image-20241016221844562.png)

上图中的 gid 用于标识当前用户所在的分组(Group)，每个用户可以对应多个分组。

Linux 系统拥有多个分组，每个用户分组就相当社团，用户如果是多个用户组 的成员，就可以访问其他分组对应的文件，前提是该分组的文件允许其他用户访问，这就需要了解另一个知识点：文件权限。

<img src=".assets/image-20241016222016169.png" alt="image-20241016222016169" style="zoom:35%;" />

#### 4.2 文件

Linux 一切皆文件

**Linux 的文件属性：**可以分为读权限、写权限、执行权限。

**Linux 文件权限**分三种情况：文件拥有者 ( owner )，分组成员 ( groups )  以及其他分组成员 ( other )。

使用以下命令查看当前目录的文件权限

```bash
ls -l
```

![image-20241016223735764](.assets/image-20241016223735764.png)

可以看到文件和文件夹的开头都有一串字符字符，例如：

```shell
drwxr-xr-x 2 cat cat 4096 Feb 14 2019 Desktop
```

各个字段的说明如下：

![image-20241016223953737](.assets/image-20241016223953737.png)

- 第一字段：文件属性

    文件属性共有十个字符，第一个字符代表文件的类型

    - `-` ：表示该文件是一个普通文件
    - `d` ：dirtectory（目录）的首字符，表示该文件是一个目录
    - `I` ：表示该文件是个链接文件

    后面的九个字符，每三个为一组，分别表示**文件拥有者的权限**、**文件所属组拥有的权限**以及**其他用户拥有的权限**。

    - `r` ：读（ read ）权限
    - `w` ：写（ write）权限
    - `x` ：执行（execute）权限

- 第二字段：链接占用的节点/子目录的个数

    第二字段的含义，主要取决该文件的类型,如果是文件的话，则表示该文件所具有的硬连接数。某个文件的第二字段如果等于 1 的话，代表没有其他指向该文件的硬连接。

    根据 Linux 系统存储文件的特点，链接的方式可以分为两种，分别是**硬链接**和**软连接**（符号连接）。软链接，类似于 Windows 操作系统的快捷方式。而硬链接，则是相当于把该文件复制一份，同时加上自动更新。当我们修改了硬链接文件的内容，源文件也会被修改。当为  某个文件创建硬链接时，该字段的值便会加 1。可以使用 `ln` 命令创建软链接和硬链接。

    对于文件夹来说，第二字段则表示该文件夹下有多少个子目录。空文件夹的话，该值默认等于 2，这是因为包含了 “ . ” 和 “ .. ” 子目录。

- 第三字段和第四字段：文件拥有者和文件所在的组

#### 4.3 chmod 命令

文件的权限由三部分组成，每个部分都对应着三种文件权限，可读、可写、可执行。

`rwx` 在二进制中的数值可以看成

- `r` ：100 - 4
- `w` ：010 - 2
- `x` ：001 - 1

因此，若文件的权限是 `rwx` ，它的数值表达式为 7，如果是 `rw-`，数值表达为 6，则有：

- `rwx` ：7 
- `rw-` ：6
- `r-x` ：5
- `r--` ：4
- `-wx` ：3
- `-w-` ：2
- `--x` ：1
- `---` ：0

若想要修改文件的所有权限则可使用以下命令：

```shell
sudo chmod xxx [文件名]
```

- `xxx = 777` 则文件权限变为了 `-rwxrwxrwx`
- `xxx = 666` 则文件权限变为了 `-rw-rw-rw-`

若要单独给用户、组、其他用户设置权限则使用以下命令

```shell
sudo chmod [ugoa][+-][rwx] [文件名]
```

- [ugoa]
    - `u` ：使用者
    - `g` ：用户所在的组
    - `o` ：其他用户
    - `a` ：所有用户

- [+-]
    - `+` ：增加权限
    - `-` ：移除权限

- [rwx]
    - `r` ：读
    - `w` ：写
    - `x` ：执行


举例：

```shell
# 给所有用户移除可执行的权限
sudo chmod a-x hello

# 给其他用户减少可写的权限
sudo chmod o-w hello

# 给 root 用户减少可写的权限
sudo chmod u-w hello

# 给 root 用户增加可写的权限
sudo chmod u+w hello													
```

### 5. Linux 文件目录

#### 5.1 根目录与家目录

**根目录**是 Linux 下所有文件和目录的起点，它的路径用斜杠符号 “ / ” 来表示。

```shell
ls /
```

![image-20241016231827272](.assets/image-20241016231827272.png)

当使用普通登陆用户（sprine）登陆时会默认进入**家目录** `/home/sprine`，当我们使用 root 用户登录时会进入 `/root` 目录，root 用户家目录就是 `/root`。

![image-20241016232141613](.assets/image-20241016232141613.png)

<img src=".assets/image-20241016232223143.png" alt="image-20241016232223143" style="zoom: 50%;" />

#### 5.2 根目录结构

整个 Linux 系统有且只有一棵从根目录开始的目录树，如下图所示。

![image-20241016232357214](.assets/image-20241016232357214.png)

|    目录    | 目录放置的内容                                               |
| :--------: | :----------------------------------------------------------- |
|    bin     | 存放系统命令的目录，如命令 `cat`，`cp`，`mkdir`              |
|    boot    | 存放开机启动过程所需的内容，如开机管理程序 grub2             |
|    dev     | 所有设备文件的目录（如声卡、硬盘、光驱）                     |
|    etc     | 系统的主要配置文件                                           |
|    home    | 用户家目录数据的存放目录                                     |
|    lib     | 存放 sbin 和 bin 目录下命令所需的库文件                      |
| lib32/ib64 | 存放二进制函数库，支持 32 位 / 64 位                         |
| lost+found | 在 EXT3/4 系统中，当系统意外崩溃或意外关机时，会产生一些碎片文件在这个目录下面，系统启动 fcsk 工具会检查这个目录，并修复已损坏的文件。 |
|   media    | 用于挂载光盘，软盘和 DVD 等设备                              |
|    mnt     | 同 media 作用一样，用于临时挂载存储设备                      |
|    opt     | 第三方软件安装存放目录                                       |
|    proc    | 进程及内核信息存放目录，不占用硬盘空间                       |
|    root    | root 用户的家目录                                            |
|    run     | 是一个临时文件系统，存储系统启动以来的信息。当系统重启时，这个目录下的文件应该被删掉或清除 |
|    sbin    | root 用户使用的命令存放目录                                  |
|    srv     | 一些网络服务所需要的数据文件                                 |
|    sys     | 同 proc 目录，用于记录 CPU 与系统硬件的相关信息              |
|    tmp     | 程序运行时产生的临时文件存放目录                             |
|    usr     | 系统存放程序的目录，类似于在 windows 下的文件夹 programefiles |
|    var     | 存放内容常变动的文件目录，如系统日志文件                     |

### 6. Vi/Vim 编辑器

大部分 Linux 系统中都会自带 Vi 编辑器已方便用户在终端上编辑文件，而 Vim 是 Vi 的升级版本，它在 Vi 的基础上改进和增加了很多特性,是一个功能更强大、高度可定制的文本编辑器。

#### 6.1 Vim 使用演示

##### 6.1.1 安装 Vim

```shell
sudo apt install vim
```

##### 6.1.2 打开 Vi/Vim

```shell
vi
vi 文件名
```

```shell
vim
vim 文件名
```

##### 6.1.3 退出 Vi/Vim

1. `Ctrl + z` 直接强制退出

    该模式下退出后再次使用 vim 进入会报类似如下的提示

    ![image-20241017010225406](.assets/image-20241017010225406.png)

    具体处理方式请看 **ERROR LOG - [Vim Ctrl+z 强制退出后再次进入显示 E325：注意](###Vim Ctrl+z 强制退出后再次进入显示 E325：注意)**

2. 在**命令行模式**下输入退出命令退出

    1. 按下退出键 `Esc`，Vim 会进入到 *一般模式* 
    2. 输入英文冒号 `:` ，Vim 会进入到 *命令行模式* 

    3. 输入强制退出命令 `q!`  ，即字母 `q` 及英文叹号 `!` 

    4. 按回车执行命令，会退出 Vim，返回到终端

##### 6.1.4 输入内容

Vim 打开后默认是在**一般模式**，在该模式下的所有输入就如同在其它常用编辑器中按了快捷键。

可通过以下步骤进入到 **插入模式** 输入内容并保存文件：

1. 按下退出键 `Esc` 进入*一般模式*
2. 直接按字母 `i` ，进入*插入模式*
3. 输入内容
4. 按下退出键 `Esc` ，再次进入*一般模式*
5. 输入英文冒号 `:` ，Vim 会进入到 *命令行模式* 
6. 输入保存退出命令 `wq`
7. 按回车执行命令，会退出 Vim，返回到终端

#### 6.2 Vim 的三种模式

- **一般模式**（normal mode）：一般模式用来浏览文本，查找内容，但是不可以编辑，在该模式下的键盘输入会被当成快捷键，如复制粘贴等。打开 Vim 时，默认是工作在一般模式。
- **插入模式**（insert mode）：插入模式下具有普通编辑器的功能，该模式下的键盘输入会被当成文本内容。
- **命令行模式**（command-line mode）：命令行模式支持保存、退出、替换等命令，以及 Vim 的高级功能。

三种模式的切换图：

<img src=".assets/image-20241017001749782.png" alt="image-20241017001749782" style="zoom: 60%;" />

##### 6.2.1 插入模式

进入/退出插入模式的快捷键：

| 快捷键 | 功能描述                                           |
| :----: | -------------------------------------------------- |
|   i    | 在当前光标所在位置插入文本                         |
|   a    | 在当前光标所在位置的下一个字符插入文本             |
|   o    | 在光标所在位置后插入新行                           |
|   r    | 替换当前光标所在位置的字符                         |
|   R    | 可以替换当前光标所在位置之后的字符,按下“Esc”则退出 |
|  ESC   | 退出插入模式                                       |

##### 6.2.2 一般模式

在任意模式下按按键 `Esc` 可进入到一般模式。

一般模式快捷键：

|                          |        快捷键        | 功能描述                                                     |
| :----------------------: | :------------------: | ------------------------------------------------------------ |
|         光标移动         |        k / ↑         | 光标向上移动                                                 |
|                          |        j / ↓         | 光标向下移动                                                 |
|                          |        h / ←         | 光标向左移动                                                 |
|                          |        l / →         | 光标向右移动                                                 |
|                          |        PageUp        | 向上翻页                                                     |
|                          |       PageDown       | 向下翻页                                                     |
|                          |          nG          | 跳转到第 n 行                                                |
|      文本查找与替换      |        /word         | 在文件中搜索关键字 word                                      |
|                          |          n           | 查找下一个关键字                                             |
|                          |          N           | 查找上一个关键字                                             |
|                          | :1,$s/word1/word2/gc | 将文本中的所有关键字 word1 用 word2 进行替换，需要用户进行确认。（ 使用 `:1,$s/word1/word2/g` 则直接全部替换 ）。这实际是运行在命令模式。 |
|         撤销重做         |          u           | 撤销上一步的操作，等价于 Windows 的 `Ctrl+Z`                 |
|                          |       Ctrl + r       | 重做上一步的操作                                             |
| 删除、剪切、  复制、粘贴 |          d           | 删除光标所选的内容                                           |
|                          |          dd          | 删除当前行                                                   |
|                          |         ndd          | 删除光标后 n 行                                              |
|                          |          x           | 剪切光标选中的字符                                           |
|                          |          y           | 复制光标所选的内容                                           |
|                          |          yy          | 复制当前行                                                   |
|                          |         nyy          | 复制当前行后 n 行                                            |
|                          |          p           | 将复制的数据粘贴在当前行的下一行                             |
|                          |          P           | 将复制的数据粘贴在当前行的上一行                             |
|         区块操作         |          v           | 选择多个字符                                                 |
|                          |          V           | 可以选择多行                                                 |
|                          |       Ctrl + v       | 可以选择多列                                                 |

##### 6.2.3 命令行模式

在一般命令模式下，按下键盘的冒号键 `:` ，就可以进入命令行模式，继续输入要执行的命令按  回车即可执行。

命令行模式快捷键：

|    快捷键    | 功能描述                                            |
| :----------: | --------------------------------------------------- |
|      w       | 保存文档                                            |
| w <filename> | 另存为以 <filename> 为文件名的文档                  |
| r <filename> | 读取文件名为 <filename> 的文档                      |
|      q       | 直接退出软件，前提是文档未做任何修改                |
|      q!      | 不保存修改，直接退出软件                            |
|      wq      | 保存文档，并退出软件                                |
|    set nu    | 在行首加入行号                                      |
|   set nonu   | 不显示行号                                          |
| set hlsearch | 搜索结果高亮显示                                    |
|  ! command   | 回到终端窗口，执行 command 命令，按回车键可切回 vim |

![img](.assets/vi-vim-cheat-sheet-sch.gif)

#### 6.3 用 Vi/Vim 软件编写简单的 sh 脚本

在终端执行下列命令：

```shell
vim hello_world.sh
```

进入文件后输入以下内容：

```shell
echo "hello world,this is a script test!"
```

Vim 退出后回到终端，通过 `source` 命令运行刚刚编写的脚本文件：

```shell
sudo chmod u+x hello_world.sh
source hello_world.sh
```

### 7. Git 项目版本管理

#### 7.1 Git 安装与配置

1. 安装 Git，在终端输入下列命令：

    ```shell
    sudo apt-get install git -y
    ```

    - `-y` ：询问是否安装时默认选择 Yes

2. 用户配置，配置用户名和邮箱

    ```shell
    git config --global user.email xxx
    git config --global user.name xxx
    ```

    - `--global` ： 配置 `~/.gitconfig` 文件，对当前用户下的所有仓库有效
    - `--system` ：配置 `/etc/gitconfig` 文件，对当前系统下的所有用户有效
    - 无参数：配置 `.git/config` 文件，只对当前仓库有效

#### 7.2 Git 本地项目管理简单使用流程

1. 创建本地仓库

    ```shell
    git init [仓库名称]
    ```

2. 添加/修改文件

    ```shell
    cd [仓库名称]
    touch FILE1, FILE2, FILE3, ...
    vim FILE1
    ...
    ```

3. 将文件的修改变化保存到仓库的暂存区

    保存单个/多个文件修改：

    ```shell
    git add FILE1, FILE2
    ```

    保存全部修改：

    ```
    git add .
    ```

4. 将保存到暂存区的修改提交到本地仓库

    ```shell
    git commit -m "The changes you want to add"
    ```

    - `-m "MESSAGE"` ：提交信息

5. 查看提交历史

    ```shell
    git log
    ```

    - `git log` 页面按 `q` 退出

6. 根据提交的 ID 查看某一个提交的详细信息

    ```shell
    git show COMMIT_ID
    ```

#### 7.3 Git 线上托管项目管理简单使用流程

GitHub 和 Gitee 是一个基于 Git 的在线项目托管平台，它提供了 web 界面,，用户可以在上面创建远程仓库来存放自己的项目。所有的开发者可以基于这个远程仓库共同协作，不断地维护和完善该项目。

> 该节以 GitHub 为例，Gitee 同理

##### 7.3.1 GitHub 获取线上项目方式比较

在 GitHub 上克隆或者管理项目时，常用的方式一般有以下三种：

![image-20241017025151559](.assets/image-20241017025151559.png)

1. **HTTPS**
    - 简单易用，不需要额外配置，直接使用用户名和密码（或 token），但 GitHub 近期似乎不再支持使用用户名和密码进行身份验证，使用 Personal Access Token 进行替代。
    - GitHub 网速在国内受限，可能会出现多次下载失败的现象（需要科学上网）。
    - 安全性相对较低：密码可能被窃取，尤其在不安全的网络上。
    - 每次操作都需输入密码（如果未缓存）。
2. **SSH**
    - 安全性高，使用密钥对进行身份验证，避免密码泄露风险。
    - 方便，一旦设置好，推送和拉取时无需输入密码。
    - 相较于 HTTPS，在国内下载项目速度更快。
    - 初始配置较复杂，需要生成密钥并添加到 GitHub。
3. **ZIP 下载**
    - 简单直观，用户只需点击下载链接，操作非常简单，不需要安装 Git 或配置身份验证。
    - 缺乏版本控制，下载 ZIP 只会获取当前代码快照，不能方便地进行版本管理和更新。
    - 不能执行 Git 操作，无法进行常规的 Git 操作（如分支管理、合并等），需要手动管理文件。

总结比较：

- **SSH** 和 **HTTPS** 更适合需要频繁更新和版本控制的开发者，能够轻松进行 Git 操作。
- **ZIP 下载** 更适合不熟悉 Git 的用户或临时需要代码快照的情况，但不适合长期开发使用。

这里我们采用 SSH 方式。

##### 7.3.2 生成 SSH 密钥

终端输入以下命令：

```shell
ssh-keygen -t rsa -b 4096 -C "your_email@example.com"
```

在密钥生成过程中会出现以下询问：

```shell
Enter file in which to save the key (/home/username/.ssh/id_rsa): 
```

可以直接按 Enter 键，以使用默认的文件路径 `/home/username/.ssh/id_rsa` 保存 SSH 密钥。这样会在这个位置生成一个新的密钥文件。如果你希望使用不同的名称或路径，可以输入新的文件名，然后按 Enter 键。通常情况下，使用默认路径即可。

```shell
Enter passphrase (empty for no passphrase): 
```

在这个提示中，你可以选择输入一个密码短语（passphrase）来保护你的 SSH 密钥。这个密码短语在你每次使用密钥时会要求你输入，以增加安全性。如果你不想每次都输入密码短语，可以直接按 Enter 键留空。

生成密钥后，你会看到一个公钥文件 `id_rsa.pub`。记得将这个公钥添加到你的 GitHub 账户中，以便进行 SSH 连接。你可以用以下命令查看公钥内容：

```
cat ~/.ssh/id_rsa.pub
```

- 确保复制的内容包括开头的 `ssh-rsa`，后面是长字符串，最后是你的邮箱地址。

##### 7.3.3 GitHub 上添加 SSH 密钥

1. 点击右上角头像打开菜单栏，进入设置页面

    ![image-20241017024300849](.assets/image-20241017024300849.png)

2. 找到 SSH and GPG keys，点击 New SSH key

    ![image-20241017024518139](.assets/image-20241017024518139.png)

3. Title 任取，将 `id_rsa.pub` 中复制的密钥粘贴在 Key 栏中，后点击 Add SSH key 即可

    ![image-20241017024627334](.assets/image-20241017024627334.png)

4. 后续可在 SSH and GPG keys 页面管理自己的密钥

    ![image-20241017024849017](.assets/image-20241017024849017.png)



##### 7.3.4 通过 SSH 从线上仓库克隆项目

在 GitHub 或者 Gitee 网站上,找到需要下载的项目，复制该项目的 SSH 链接。

![image-20241017030734408](.assets/image-20241017030734408.png)



在终端 `cd` 到合适的目录运行下列命令：

```shell
git clone git@github.com:SprInec/LinuxLearn.git
```

第一次使用 SSH 克隆项目回车后可能会看到如下提示

![image-20241017031322097](.assets/image-20241017031322097.png)

这是 SSH 连接的安全提示，询问你是否信任 GitHub 的服务器。输入 `yes` 并按 Enter 键，系统将会将 GitHub 的主机密钥添加到你的 `~/.ssh/known_hosts` 文件中，之后就不会再出现这个提示。

继续后续操作，`git clone` 会开始下载仓库，稍作等待即可在当前目录下看到克隆的项目文件夹。

##### 7.3.5 进行项目更改及推送

下面的操作和在本地进行项目管理的操作基本一致，只是多了 `push` 和 `pull` 两个进行线上和本地同步的操作。

1. 进入项目仓库

    ```shell
    cd [仓库名称]
    ```

2. 拉取远程仓库的最新更改

    ```shell
    git pull
    ```

3. 添加/修改文件

    ```shell
    touch FILE1, FILE2, FILE3, ...
    vim FILE1
    ...
    ```
    
4. 将文件的修改变化保存到仓库的暂存区

    保存单个/多个文件修改：

    ```shell
    git add FILE1, FILE2
    ```

    保存全部修改：

    ```
    git add .
    ```

5. 将保存到暂存区的修改提交到本地仓库

    ```shell
    git commit -m "The changes you want to add"
    ```

    - `-m "MESSAGE"` ：提交信息

6. 再次拉取远程更新

    ```bash
    git pull
    ```


7. 将本地提交推送到远程仓库

    ```shell
    git push
    ```

8. 查看提交历史

    ```shell
    git log
    ```

    - `git log` 页面按 `q` 退出

9. 根据提交的 ID 查看某一个提交的详细信息

    ```shell
    git show COMMIT_ID
    ```

#### 7.4 Git 项目管理的一般步骤

```mermaid
graph TD;
    A[创建或克隆仓库] -->|git init| B[本地新仓库]
    A -->|git clone| C[远程仓库]
    
    B -->|git config| E[配置用户名和邮箱]
    E -->|git status| F[查看状态]
    F -->|git add .| G[添加文件]
    G -->|git commit| H[提交更改]
    H --> |git log| R1[查看历史记录]
    R1 --> |git show COMMIT_ID| S1[根据ID查看某一个提交的详细信息]
    
    C -->|git config| E
    E -->|git status| L[查看状态]
    L -->|git pull| M[拉取远程更新]
    M --> N[进行本地修改]
    N -->|git add .| O[添加更改]
    O -->|git commit| P[提交更改]
    P --> |git pull| M2[再次拉取远程更新]
    M2 -->|git push| Q[推送到远程]
    Q -->|git log| R2[查看历史记录]
    R2 --> |git show COMMIT_ID| S2[根据ID查看某一个提交的详细信息]
```

**1. 创建或克隆仓库**

- 使用 `git init` 创建新的本地仓库。
- 使用 `git clone <repo-url>` 克隆现有的远程仓库。

**2. 配置用户信息**（如果是新仓库）

```bash
git config --global user.name "Your Name"
git config --global user.email "your_email@example.com"
```

**3. 查看状态**

使用 `git status` 查看当前工作区和暂存区的状态。

**4. 拉取远程更新**

使用 `git pull origin <branch-name>`  在进行本地修改之前，先拉取远程仓库的最新更改，以确保你的本地代码是最新的。这有助于避免后续推送时发生冲突。

**5. 添加更改**

使用 `git add <file>` 将更改添加到暂存区，或使用 `git add .` 添加所有更改。

**6. 提交更改**

使用 `git commit -m "Commit message"` 提交暂存区的更改。

**7. 再次拉取远程更新**

使用 `git pull` 再次拉取远程仓库更新。

**8. 推送到远程**

使用 `git push origin <branch-name>` 将本地提交推送到远程仓库。

**9. 处理分支**（可选）

- 创建新分支：`git branch <branch-name>`
- 切换分支：`git checkout <branch-name>`
- 合并分支：`git merge <branch-name>`

**10. 解决冲突**（如有）

在合并过程中可能会出现冲突，手动解决后，重新添加和提交。

**11. 查看历史记录**

使用 `git log` 查看提交历史，`git log`  页面按 `q` 退出。

**12. 根据某个 ID 查看详细的提交信息**

从`git log` 显示的信息中获取想要查看的 `COMMIT_ID` 使用  `git show COMMIT_ID` 命令进行查看。

#### 7.5 Git 本地项目上传到 GitHub

将本地通过 `git init` 创建的新仓库推送到 GitHub 的步骤如下：

##### 1. 创建 GitHub 仓库

- 登录到 GitHub，点击左上角的 `New` 图标。

    ![image-20241017155846956](.assets/image-20241017155846956.png)

- 输入仓库名称，选择是否公开或私有，最后点击 `Create repository`。

    ![image-20241017160517245](.assets/image-20241017160517245.png)

- 若没有勾选 `Add a README file` 创建好仓库后可能会显示以下页面

    ![image-20241017161108916](.assets/image-20241017161108916.png)

##### 2. 在本地仓库中添加远程仓库

在本地仓库中，使用以下命令将 GitHub 仓库设置为远程仓库：

```bash
git remote add origin git@github.com:你的用户名/仓库名.git
```

- 替换 `你的用户名` 和 `仓库名` 为你实际的 GitHub 用户名和创建的仓库名。

- `git@github.com:你的用户名/仓库名.git` 为 SSH 链接

##### 3. 添加文件并提交

如果还没有添加文件，可以按照以下步骤进行：

```bash
git add .
git commit -m "first commit"
```

##### 4. 查看当前所有分支

若不清楚当前仓库的分支情况，可使用以下命令查看当前仓库所有分支：

```bash
git branch
```

##### 5. 推送到 GitHub

使用以下命令将本地仓库的更改推送到 GitHub：

```bash
git push -u origin master
```

- `-u` ：它的作用是在首次推送一个分支时，建立本地分支与远程分支之间的跟踪关系。之后可以简单地使用 `git push` 和 `git pull` 而不用每次都指定远程仓库和分支名称，Git 会自动知道该推送或拉取到哪个分支。

如果使用的是 `main` 分支，替换为：

```bash
git push -u origin main
```

> **:bulb: NOTE**
>
> **1. 首次推送到新的远程分支：** 可以使用 `git push -u origin <分支名>`，这样会创建本地分支与远程分支之间的跟踪关系。
>
> ```bash
> git push -u origin feature-branch
> ```
>
> 之后，在这个分支上只需要输入 `git push` 就可以推送到远程的 `feature-branch`。
>
> **2. 仅推送一次到特定分支：** 如果不想建立长期跟踪关系，只想推送一次到远程分支，可以省略 `-u`，直接执行：
>
> ```bash
> git push origin feature-branch
> ```
>
> **3. 推送本地分支到远程不同名称的分支：** 如果本地分支和远程分支名称不同，可以使用以下命令：
>
> ```bash
> git push origin <本地分支名>:<远程分支名>
> ```
>
> 例如，将本地的 `dev-branch` 推送到远程的 `main` 分支：
>
> ```bash
> git push origin dev-branch:main
> ```

#### 7.6 常用 Git 命令

- `git init` ：初始化一个新的 Git 仓库

- `git clone <repo-url>` ：克隆一个远程仓库到本地

- `git status` ：查看当前工作区和暂存区的状态

- `git log` ：查看提交历史

- `git add <file>` ：将指定文件添加到暂存区

- `git add .` ：将当前目录及其所有子目录下的所有文件添加到暂存区
- `git add *`：将当前目录下的所有文件（不包括子目录中的文件）添加到暂存区

- `git commit -m "Commit message"` ：提交暂存区的更改，并附上提交信息

- `git branch` ：列出所有本地分支

- `git branch <branch-name>` ：创建一个新分支

- `git checkout <branch-name>` ：切换到指定分支

- `git merge <branch-name>` ：将指定分支合并到当前分支

- `git pull origin <branch-name>` ：从远程仓库拉取并合并指定分支的更新

- `git push origin <branch-name>` ：将本地分支的更改推送到远程仓库

- `git remote -v` ：查看当前配置的远程仓库

- `git rev-parse --abbrev-ref HEAD` ：查看当前所在的分支

- `git checkout -- <file>` ：撤销未暂存的修改

- `git reset HEAD~1` ：撤销最近一次提交（保留修改）

### 8. 程序编译

#### 8.1 GCC 编译工具链

GCC 编译工具链（toolchain）是指以 GCC 编译器为核心的一整套工具，用于把源代码转化成可  执行应用程序。它主要包含以下三部分内容:

- `gcc-core`：即 GCC 编译器,用于完成预处理和编译过程，例如把 C 代码转换成汇编代码。
- `Binutils`：除 GCC 编译器外的一系列小工具包括了链接器 `ld`，汇编器 `as`，目标文件格式查看器 `readelf` 等。
- `glibc`：包含了主要的 C 语言标准函数库，C 语言中常常使用的打印函数 `printf`、`malloc` 函数就在 `glibc` 库中

在很多场合下会直接用 GCC 编译器来指代整套 GCC 编译工具链。

##### 8.1.1 GCC 编译器

GCC（GNU Compiler Collection）是由 GNU 开发的编程语言编译器。是历史上最优秀的编译器，其执行效率与一般的编译器相比平均效率要高 20%~30%。

安装 gcc 编译器：

```bash
sudo apt install gcc
```

查看 gcc 版本及所在位置：

```bash
gcc -v
which gcc
```

![image-20241017153644406](.assets/image-20241017153644406.png)

- `Target: aarch64-linux-gnu` ：表示该 GCC 的目标平台为 ARM64 位架构，表示它编译生成的应用程序只适用于 ARM 板卡平台，不适用于 x86 架构。

- `gcc version 11.4.0` ：表明该 GCC 的版本为 11.4.0，部分程序可能会对编译器版本有要求，同样的，编译指定版本的 uboot、Linux 内核的时候可能会对 GCC 有版本要求。

##### 8.1.2 Binutils 工具集

Binutils（ bin utility ），是 GNU 二进制工具集，通常跟 GCC 编译器一起打包安装到系统，它的官方说明网站地址为:https://www.gnu.org/software/binutils/ 。

在进行程序开发的时候通常不会直接调用这些工具，而是在使用 GCC 编译指令的时候由 GCC 编  译器间接调用。下面是其中一些常用的工具：

- `as` ：**汇编器**，把汇编语言代码转化为机器码（目标文件）。
- `ld` ：**链接器**，把编译生成的多个目标文件组织成最终的可执行文件。
- `readelf` ：可用于查看目标文件或可执行程序文件的信息。
- `nm` ：可用于查看目标文件中出现的符号。
- `objcopy` ：可用于目标文件格式转换，如 `.bin` 转换为 `.elf` 、`.elf` 转换成 `.bin` 等。
- `objdump` ：可用于查看目标文件的信息，最主要的作用是**反汇编**。
- `size` ：可用于查看目标文件不同部分的尺寸和总尺寸，例如代码段大小、数据段大小、使用的静态内存、总大小等。

系统默认的 Binutils 工具集位于 `/usr/bin`  目录下，可使用如下命令查看系统中存在的 Binutils 工具集：

```bash
ls /usr/bin/ | grep linux-gnu-
```

![image-20241017154856366](.assets/image-20241017154856366.png)

图中列出的是 Binutils 工具的完整名字，在终端中使用时通常直接使用它们的别名即可。

##### 8.1.3 glibc 库

glibc 库是 GNU 组织为 GNU 系统以及 Linux 系统编写的 C 语言标准库，因为绝大部分 C 程序都依赖该函数库，该文件甚至会直接影响到系统的正常运行，例如常用的文件操作函数 `read`、`write`、  `open`，打印函数 `printf`、动态内存申请函数 `malloc` 等。

在 Ubuntu 系统下，`libc.so.6` 是 glibc 的库文件，可直接执行该库文件查看版本，在主机上执行如下命令:

```bash
# 以下是 Ubuntu 64 位机的 glibc 库文件路径, 可直接执行
/lib/aarch64-linux-gnu/libc.so.6
```

glibc 的官网地址为：https://www.gnu.org/software/libc/

#### 8.2 Hello World

##### 8.2.1 创建工作目录

使用以下命令构建工作目录结构：

```bash
mkdir base_linux
cd base_linux

mkdir hello
cd hello

mkdir hello hello_arg hello_opt
```

工作目录结构如下:

```bash
base_linux
└── hello <-当前位置
    ├── hello
    ├── hello_arg
    └── hello_opt
```

##### 8.2.2 编写代码文件

进入目标目录 `base_linux/hello/hello`：

```bash
cd hello
```

使用 Vim 新建一个名为 `hello.c` 的文件：

```bash
vim hello.c
```

输入以下代码并保存：

```c
#include "stdio.h"

int main()
{
        int i;
        printf("hello, world! This is a C program.\n");
        for (int i = 0; i < 10; i++){
                printf("output i=%d\n",i);
        }

        return 0;
}
```

##### 8.2.3 编译并执行

使用 gcc 把 `hello.c` 编译成 `hello` 程序

```bash
gcc hello.c -o hello
```

查看目录下文件：

```bash
ls
```

![image-20241017164550962](.assets/image-20241017164550962.png)

执行生成的 `hello` 程序：

```bash
./hello
```

![image-20241017164649526](.assets/image-20241017164649526.png)

#### 8.3 GCC 编译过程

##### 8.3.1 基本语法

GCC 命令语法如下：

```bash
gcc <option> <file_name>
```

常用选项 <option>：

- `-o` ：小写字母 `o`，指定生成的可执行文件的名字，不指定的话生成的可执行文件名为 `a.out`。
- `-E` ：只进行预处理，既不编译，也不汇编。
- `-S` ：只编译、不汇编。
- `-c` ：编译并汇编，但不进行链接。
- `-g` ：生成的可执行文件带调试信息，方便使用 `gdb` 进行调试。
- `-Ox` ：大写字母 `O` 加数字，设置程序的优化等级，如 `-O0`  `-O1`  `-O2`  `-O3`，数字越大代码的优化等级越高，编译出来的程序一般会越小，但有可能会导致程序不正常运行。

##### 8.3.2 编译过程

GCC 编译选项除了`-g` 和 `-Ox` 选项，其它选项实际上都是编译的分步骤，即只进行某些编译过程。

直接编译成可执行文件：

```bash
gcc hello.c -o hello
```

以上命令等价于执行以下全部操作：

1. **预处理**，可理解为把头文件的代码汇总成 C 代码，把 `*.c` 转换得到 `*.i` 文件

    ```bash
    gcc -E hello.c -o hello.i
    ```

2. **编译**，可理解为把 C 代码转换为汇编代码，把 `*.i` 转换得到 `*.s` 文件

    ```bash
    gcc -S hello.i -o hello.s
    ```

    也可直接以 C 文件作为输入进行编译，与上面的命令是等价的：

    ```bash
    gcc -S hello.c -o hello.s
    ```

3. **汇编**，可理解为把汇编代码转换为机器码，把 `*.s` 转换得到 `*.o`，即目标文件

    ```bash
    gcc -c hello.s -o hello.o
    ```

    也可以直接以 C 文件作为输入进行汇编，与上面的命令是等价的：

    ```bash
    gcc -c hello.c -o hello.o
    ```

    - `.o` 是为了让计算机阅读的，如果直接使用编辑器打开，只会看到乱码。

    - Linux 下生成的 `*.o` 目标文件、`*.so` 动态库文件以及下一小节链接阶段生成最终的可执行文件都是 `elf` 格式的，可以使用 `readelf` 工具来查看它们的内容。

        ```bash
        readelf -a hello.o
        ```

        从 readelf 的工具输出的信息，可以了解到目标文件包含 ELF 头、程序头、节等内容

4. **链接**，把不同文件之间的调用关系链接起来，把一个或多个 `*.o` 转换成最终的可执行文件

    ```bash
    gcc hello.o -o hello
    ```

GCC 编译工具链在编译一个 C 源文件时需要经过以下 4 步:

1. **预处理**：在预处理过程中，对源代码文件中的文件包含 (include)、预编译语句 (如宏定义  define 等) 进行展开，生成 `.i`  文件。可理解为把头文件的代码、宏之类的内容转换成更纯粹的 C 代码，不过生成的文件以 `.i` 为后缀。
2. **编译**：把预处理后的 `.i` 文件通过编译成为汇编语言，生成 `.s` 文件，即把代码从 C 语言转换成汇编语言，这是 GCC 编译器完成的工作。
3. **汇编**：将汇编语言文件经过汇编，生成目标文件`.o` 文件，每一个源文件都对应一个目标文件。即把汇编语言的代码转换成机器码，这是 `as` 汇编器完成的工作。
4. **链接**：最后将每个源文件对应的 `.o` 文件链接起来，就生成一个可执行程序文件，这是链接  器 `ld` 完成的工作。

<img src=".assets/image-20241017173250099.png" alt="image-20241017173250099" style="zoom:50%;" />

##### 8.3.3 链接的两种类型

- **动态链接**：GCC 编译时的默认选项。动态是指在应用程序运行时才去加载外部的代码库,  例如 `printf` 函数的 C 标准代码库 `*.so` 文件存储在 Linux 系统的某个位置，`hello` 程序执行时调用库文件 `*.so` 中的内容，不同的程序可以共用代码库。所以动态链接生成的程序比较小，占用较少的内存。

    ```bash
    gcc hello.c -o hello
    ```

- **静态链接**：链接时使用选项 `–static`，它在编译阶段就会把所有用到的库打包到自己的可  执行程序中。所以静态链接的优点是具有较好的兼容性，不依赖外部环境，但是生成的程序比较大。

    ```bash
    gcc hello.c -o hello_static --static
    ```

    ![image-20241017175710487](.assets/image-20241017175710487.png)

在 Ubuntu 下，可以使用 `ldd` 工具查看动态文件的库依赖：

```bash
ldd hello
ldd hello_static
```

![image-20241017180045320](.assets/image-20241017180045320.png)

可以看到，动态链接生成的 `hello` 程序依赖于库文件 `linux-vdso.so.1`、`libc.so.6` 以及 `ld-linuxaarch64.so.1`，其中的 `libc.so.6` 就是 C 标准代码库，程序中调用了它的 `printf`  库函数。 

 静态链接生成的 `hello_static` 没有依赖外部库文件。

#### 8.4 Hello World Pro-1

main 函数传参：

```c
int main(int argc, char **argv)
```

例：命令端执行

```bash
./hello aaa bbb ccc
```

- `int argc` ：保存参数的个数，上例中 argc = 4
- `char **argv` ：保存传入的参数的指向字符串数组的指针
    1. argv[0] = ./hello
    2. argv[1] = aaa
    3. argv[2] = bbb
    4. argv[3] = ccc

进入目录 `base_linux/hello/hello_arg`

```bash
cd base_linux/hello/hello_arg
```

使用 Vim 创建并编辑文件 `hello_arg.c`

```bash
vim hello_arg.c
```

```C
#include <stdio.h>

int main(int argc, char **argv)
{       
        int i;
        if (argc >= 2)
        {
                printf("you enter: \"");
                for (i = 0; i < argc; i++)
                {
                        printf("%s", argv[i]);
                }
                printf("\"\n");
                printf("you enter %d strings\n", argc);
        }       
        else
        {       
                printf("hello, world! This is a C program.\n");
        }       

        return 0;
}
```

编译并执行文件：

```bash
gcc hello_arg.c -o hello_arg
```

```bash
./hello_arg 1 2 3 4 5
```

![image-20241017220546347](.assets/image-20241017220546347.png)

> :warning:**NOTICE​**
>
> 输入的参数都是以字符串的形式保存，如果输入数字的话，需要字符串转成数字类型才能使用

#### 8.5 Hello World Pro-2

增加选项配置，像我们平常用的 ls 命令，我们可以在后面加入不同的选项就可以实现不一样的  功能。

进入目录 `base_linux/hello/hello_opt` 

```bash
cd base_linux/hello/hello_opt
```

使用 Vim 创建并编辑文件 `hello_opt.c`

```bash
vim hello_opt.c
```

```c
#include <stdio.h>
#include <getopt.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief: 打印帮助信息
 */
void usage(const char *argv_0)
{
        printf("\nUsage %s: [-option] \n", argv_0);
        printf("[-a] hello!\n");
        printf("[-b] I am LubanCat\n");
        printf("[-c <str>] str\n");
        printf("[-d <num>] printf num of '*' (num<100)\n");
        printf("[-h] get help\n");
        exit(1);
}

/**
 * @brief: 打印 n 个 * 号
 */
void d_option(char *num_str)
{
        int num, i;
        int ge, shi;

        shi = (char)num_str[0] - 48;
        ge = (char)num_str[1] - 48;
        num = shi * 10 + ge;

        for (i = 0; i < num; i++)
        {
                printf("*");
        }
        printf("*\n");
}

int main(int argc, char **argv)
{
        int i;
        int opt;

        while ((opt = getopt(argc, argv, "c:d:abh")) != -1)
        {
                switch (opt)
                {
                        case 'a':
                                printf("hello!\n");
                                break;
                        case 'b':
                                printf("I am LubanCat\n");
                                break;
                        case 'c':
                                if (optarg)
                                {
                                        if (optarg[0] == '-')
                                        {
                                                usage(argv[0]);
                                        }
                                        else
                                        {
                                                printf("%s\n", optarg);
                                        }
                                }
                                else
                                {
                                        usage(argv[0]);
                                }
                                break;
                        case 'd':
                                if (optarg)
                                {
                                        if (optarg[0] == '-')
                                        {
                                                usage(argv[0]);
                                        }
                                        else
                                        {
                                                if (strlen(optarg))
                                                {
                                                        d_option(optarg);
                                                }
                                                else
                                                {
                                                        usage(argv[0]);
                                                }
                                        }
                                }
                                else
                                {
                                        usage(argv[0]);
                                }
                                break;
                        default: 
                                usage(argv[0]);
                                break;
                }
        }

        return 0;
}
```

编译并执行：

```bash
gcc hello_opt.c -o hello_opt
```

```bash
./hello_opt
./hello_opt -a
./hello_opt -b
./hello_opt -c helloworld
./hello_opt -d num
./hello_opt -abcd
./hello_opt -h
```

![image-20241018094036851](.assets/image-20241018094036851.png)

### 9. Linux 系统下的程序

#### 9.1 裸机下的 Hello World

单片机中 `hello_world` 程序的流程图：

![image-20241018154234699](.assets/image-20241018154234699.png)

- 第一步：进行源代码的编写，其中关键的点在于 `printf` 函数的实现，它需要依赖单片机的串口驱动程序。
- 第二步：借助一些集成开发环境进行程序的编译。一键编译，无需学习编译链接相关知识。
- 第三步：借助烧录工具烧录到具体芯片上。一键烧录，无需学习芯片的 flash 和各种各样启  动方式。
- 第四步：上电启动板卡，串口输出 “ Hello World ” 字符串。

#### 9.2 Linux 系统下的 Hello World

Linux 系统下， `hello_world` 程序的流程图如下：

<img src=".assets/image-20241018125038794.png" alt="image-20241018125038794" style="zoom:50%;" />

- 第一部分，浅蓝色外框部分为程序的编译。
- 第二部分，浅黄色外框部分为 Linux 内核提供的服务。
- 第三部分，橘色外框部分为 `glibc` 库提供的服务。
- 第四部分，浅紫色外框部分，为用户程序。

针对每个子步骤的进一步讲解：

1. 预处理 `hello.c`，主要是处理程序里面的文件包含、处理宏定义、条件编译。

2. 把 c 文件编译成为汇编文件 (.s)，其中进行了词法分析，语法分析，语义分析、生成中间代  码、对代码进行优化等工作。

3. 把汇编文件 (.s) 编译成可重定位文件 (.o)。

4. 把可重定位文件 (.o) 链接成为可执行文件，其中链接可分为静态链接和动态链接。

    - **静态链接**：在编译阶段就会把所有用到的库打包到自己的可执行程序中，其优点是具有较好的兼容性，不依赖外部环境，但是生成的程序比较大。

    - **动态链接**：在应用程序运行时，链接器去加载外部的共享库，并完成共享库和动态编译程序之间的链接。不同的程序可以共用代码库，节省内存空间。

5. 控制台输入 `./hello`  命令后，Shell 会创建一个新的进程来执行该程序。`fork()` 函数就是用于创建一个新的进程的。这里的进程可以先简单理解为程序的容器。

6. `exeve()` 函数可以理解为向上一步新建的进程，填充一个可执行程序 (hello)。

7. `sys_execve()` 函数为 linux 系统调用，被 `exeve()` 函数调用，这里的系统调用可以理解为是操作系统系统开放给用户的最底层接口。

8. `do_exeve()` 函数是 `sys_execve()` 函数的核心。

9. `load_elf_binary()` 函数会去文件系统中读取 `hello`  程序到内存，然后判断它是否是动态链接的可执行程序，如果不是，则进一步判断是否是静态链接的文件。

10. `ld-linux-xx.so` 是 `glibc` 库中的动态连接器。如果 `hello` 程序是动态链接程序，该动态链接器会去加载共享库，并完成共享库和程序的链接工作，然后准备真正开始执行 `hello` 程序。

11. 相反，如果 `hello` 程序是静态编译的程序，则无需再加载链接共享库，直接开始准备执行  `hello` 程序。

    - 第 10 和 11 步分别执行之后，都会开始执行 `hello` 程序，`_start` 是程序的真正入口，而该符号在 `glibc` 中。也就是说程序的真正入口在 `glibc`。

12. `__libc_start_main()` 也是 `glibc` 中的函数，用于在执行用户程序前进行一些初始化工作。

13. 调用用户程序中的 `mian()` 函数,开始执行 `printf` 打印函数。

14. 程序执行完了之后，调用 `glibc` 库中的 `_exit()` 函数，来结束当前进程。

### 10. Makefile

#### 10.1 Makefile 是什么

在编译单个文件时，使用以下命令即可：

```bash
gcc hello.c -o hello
```

当一个工程中有很多 C 源文件和 H 头文件时，再直接使用编译器指令就非常麻烦了，如下例:

```bash
gcc hello.c aaa.c bbb.c -o hello
```

而且哪怕只是修改一个文件，也需要重新编译所有的文件，白白浪费了很多开发时间。

解决这个问题最好的方式就是把工程的编译规则写下来，让编译器自动加载该规则进行编译。解决方法就是使用 make 和 Makefile，这两个工具是搭配使用的：

- **make 工具**：可以帮助我们找出项目里面修改变更过的文件，并根据依赖关系，找出受修改影响的其他相关文件，然后对这些文件按照规则进行单独的编译，这样一来就能避免重新编译项目的所有的文件。
- **Makefile 文件**：上面提到的规则、依赖关系主要是定义在这个 Makefile 文件中的，在其中合理地定义好文件的依赖关系之后，make 工具就能精准地进行编译工作。

<img src=".assets/image-20241019120122475.png" alt="image-20241019120122475" style="zoom:50%;" />

管理一个项目工程，实质上就是管理项目文件间的依赖关系。在学习和使用 Makefile 的时候，一定要牢牢抓住它这种面向依赖的思想，心里一定要谨记，**Makefile 中所有的复杂、晦涩的语法都是更好地为解决依赖问题而存在的**。

当工程复杂度再上一个台阶的时候，会觉得手写 Makefile 也很麻烦，那个时候可以用 CMake、autotools 等工具来帮忙生成 Makefile。

<img src=".assets/image-20241019120520540.png" alt="image-20241019120520540"  />

#### 10.2 常用的 Makefile 知识点

<img src=".assets/Makefile 知识点.png" />

1. **基础语法** ：描述目标和依赖的特定格式，Makefile 的核心。
2. **变量**：记录特定的信息，避免重复输入原始信息，尤其是当需要手动输入的信息很长时。
3. **分支判断**：灵活控制多个不同的编译过程，方便兼容不同属性。
4. **头文件依赖**：监控头文件的变化，头文件也是程序的关键内容。
5. **隐含规则**：利用 Makefile 的一些默认规则，可以减少编写 Makefile 的工作量。
6. **自动化变量**：利用 Makefile 的默认的自动化变量，可以减少编写 Makefile 的工作量。
7. **模式规则**：灵活使用正则表达式，减少编写 Makefile 的工作量。
8. **函数**：使用 Makefile 的各种函数，可以更方便地实现 Makefile 的功能。

Makefile 的核心在于基础语法，用来描述目标和依赖的关系。其他语法的目的，是为了减少编写 Makefile 工作量，让开发人员能够以更加优雅、更加简洁、更好维护的方式来实现 Makefile 的功能。

#### 10.3 使用 Makefile 控制编译

使用以下命令安装 Makefile 工具:

```bash
sudo apt install make
```

本节的代码目录为 `./base_linux/makefile` 。

##### 10.3.1 Makefile 小实验

```makefile
# path: /makefile/test1/Makefile
targeta: targetc targetb
        ls -lh

targetb:
        touch test.txt

targetc: 
        pwd

targetd:
        rm -f test.txt
```

- 这个 Makefile 文件主要是定义了四个目标操作

- 第一个目标 `targeta`，是最终目标及 make 的默认目标

- `targeta: targetc targetb` ：目标 a，依赖于目标 `targetc` 和 `targetb`

    ` Tab ls -lh` ：目标要执行的 shell 命令 `ls -lh`，列出目录下的内容

- `targetb:` ：目标 b，无依赖

    `Tab touch test.txt` ：目标要执行的 shell 命令，使用 `touch` 创建 `test.txt` 文件

- `targetc:` ：目标 c，无依赖

    `Tab pwd` ：目标要执行的 shell 命令，`pwd` 显示当前路径

- `targetd` ：目标 d，无依赖

    由于 abc 目标都不依赖于目标 d，所以直接 make 时目标 d 不会被执行

    可以使用 `make targetd` 命令执行

make 程序会根据 Makefile 中描述的目标与依赖关系，执行达成目标需要的 shell 命令。简单来说，Makefile 就是用来指导 make 程序如何干某些事情的清单。

##### 10.3.2 使用 Makefile 编译程序

###### 10.3.2.1 使用 GCC 编译多个文件

使用 vim 在指定路径下创建并编写以下文件：

```c
// path: /makefile/test2/hello_main.c
#include "hello_func.h"

int main(void)
{
    hello_func();
    return 0;
}
```

```c
// path: /makefile/test2/hello_func.c
#include <stdio.h>
#include "hello_func.h"

void hello_func(void)
{
        printf("hello, world! This is a C program.\n");
        for (int i = 0; i < 10; i++)
        {
                printf("output i = %d\n", i);
        }
}
```

```c
// path: /makefile/test2/hello_func.h
void hello_func(void);
```

编写完成后在 `/makefile/test2/` 目录下使用 GCC 进行编译：

```bash
gcc hello_main.c hello_func.c -o hello_main -I .
```

- `-I .`  ：告诉编译器头文件路径，让它在编译时可以在 “.” (当前目录)寻找头文件

运行生成的 `hello_main` 程序：

```bash
./hello_main
```

 ![image-20241019171431079](.assets/image-20241019171431079.png)

###### 10.3.2.2 使用 Makefile 编译

使用 vim 创建 Makefile 文件并编写如下代码:

```makefile
# path: /makefile/test2/Makefile
hello_main: hello_main.c hello_func.c
	gcc -o hello_main hello_main.c hello_func.c -I .

clean:
	rm -f *.o hello_main
```

使用 `make` 命令编译程序：

```bash
rm hello_main # 移除上一节 gcc 编译的程序
ls

make # 使用 make 进行编译
ls

make # 再次使用 make 编译

touch hello_func.c # 更新 hello_func.c 文件时间为当前系统时间

make # 再次编译

make clean # 调用 make clean 清除程序
ls
```

- make 会对目标文件和依赖进行更新检查，当依赖文件有改动时，才会再次执行命令更新目标文件。

![image-20241019172445941](.assets/image-20241019172445941.png)

#### 10.4 目标与依赖

Makefile 中跟目标相关的语法：

```makefile
[目标 1]: [依赖]
	[命令 1]
	[命令 2]
[目标 2]: [依赖]
	[命令 1]
	[命令 2]
```

- **目标** ：指 make 要做的事情，可以是一个简单的代号，也可以是目标文件，需要顶格书写，  前面不能有空格或 Tab。

    一个 Makefile 可以有多个目标，写在最前面的第一个目标，会被  Make 程序确立为 *默认目标*，例如前面的 `targeta`、`hello_main`。

- **依赖** ：要达成目标需要依赖的某些文件或其它目标。例如前面的 `targeta` 依赖于 `targetb` 和  `targetc`，又如在编译的例子中，`hello_main` 依赖于 `hello_main.c`、`hello_func.c` 源文件，若这些文件更新了会重新进行编译。

- **命令 1，命令 2 ⋯ 命令 n** ：make 达成目标所需要的命令。只有当目标不存在或依赖文件的修改时间比目标文件还要新时，才会执行命令。要特别注意**命令的开头要用 `Tab` 键，不能使用空格代替**，有的编辑器会把 `Tab` 键自动转换成空格导致出错，若出现这种情况请检查自己的编辑器配置。

#### 10.5 伪目标

前面我们在 Makefile 中编写的目标，在 make 看来其实都是目标文件，例如 make 在执行的时候由于在目录找不到 `targeta` 文件，所以每次 `make targeta` 的时候，它都会去执行 `targeta` 的命令，期待执行后能得到名为 `targeta` 的同名文件。如果目录下真的有 `targeta`、`targetb`、`targetc` 的文件，即假如目标文件和依赖文件都存在且是最新的，那么 `make targeta` 就不会被正常执行了，这会引起误会。

Makefile 使用 **`.PHONY`** 前缀来区分目标代号和目标文件，并且这种目标代号被称为**伪目标**，phony 单词翻译过来本身就是假的意思。

也就是说，只要我们不期待生成目标文件，就应该把对应的目标定义成伪目标。

前面 [10.3.1](#####10.3.1 Makefile 小实验) 的演示代码修改如下：

```makefile
 # path: /makefile/test1/Makefile
.PHONY: targeta
targeta: targetc targetb
	ls -lh

.PHONY: targetb
targetb:
	touch test.txt
	
.PHONY: targetc
targetc:
	pwd
	
.PHONY: targetd
targetd:
	rm -f test.txt
```

```bash
cd /base_linux/makefile/
cp -r test2 test3
cd test3
touch clean
```

[10.3.2.2](######10.3.2.2 使用 Makefile 编译) 的演示代码修改如下:

```makefile
# path: /makefile/test3/Makefile
hello_main: hello_main.c hello_func.c
	gcc -o hello_main hello_main.c hello_func.c -I .

.PHONY: clean
clean:
	rm -f *.o hello_main
```

如果以上代码中不写 `.PHONY:clean` 语句，并且在目录下创建一个名为 `clean` 的文件，那么当  执行 `make clean` 时，`clean` 的命令并不会被执行。

#### 10.6 默认规则







































## 三. Linux 镜像构建与部署

> **参考书籍：** [[野火]《嵌入式Linux镜像构建与部署—基于LubanCat-RK系列板卡》](https://doc.embedfire.com/linux/rk356x/build_and_deploy/zh/latest/index.html)
>
> **使用板卡：** LubanCat 4 RK3588S



## 四. Linux Qt 应用开发

> **参考书籍：** [[野火]《嵌入式Qt应用开发指南-基于LubanCat-RK系列板卡》](https://doc.embedfire.com/linux/rk356x/Qt/zh/latest/index.html)
>
> **使用板卡：** LubanCat 4 RK3588S
>
> **装载系统**：Ubuntu 22.04.3 LTS (GNU/Linux 5.10.160-rockchip aarch64)



## 五. Linux 驱动开发

> **参考书籍：** [[野火]《嵌入式Linux驱动开发实战指南—基于LubanCat RK系列板卡》](https://doc.embedfire.com/linux/rk356x/driver/zh/latest/index.html)
>
> **使用板卡：** LubanCat 4 RK3588S
>
> **装载系统**：Ubuntu 22.04.3 LTS (GNU/Linux 5.10.160-rockchip aarch64)

### 1. 获取内核源码

#### 1.1 安装 git

```shell
sudo apt-get install git
```

#### 1.2 创建存放文件夹

```shell
mkdir LubanCat
cd LubanCat
```

#### 1.3 获取内核源码

##### 1.3.1 从GitHub获取

```shell
git clone -b develop-5.10 https://github.com/LubanCat/kernel.git
```

##### 1.3.2 从野火共享的网盘资料中获取压缩包

`LubanCat_Linux_rk3588_SDK_20240510.7z` 

1. 将压缩包下载到 windows 端之前设置的共享文件夹，在ubuntu中进入挂载目录进行拷贝

```shell
cd /mnt/hgfs/LinuxLearn
cp LubanCat_Linux_rk3588_SDK_20240510.7z ~/桌面/LubanCat/LubanCat4_RK3588_SDK
```

2. 安装 `7z`

```shell
sudo apt install p7zip-full
```

3. 进入拷贝目录，进行解压

```shell
cd ~/桌面/LubanCat/LubanCat4_RK3588_SDK
7z x LubanCat_Linux_rk3588_SDK_20240510.7z
```

4. 检出 *.repo* 目录下的 git 仓库

```shell
.repo/repo/repo sync -l
```

5. 进入 kernel 目录

```
ls
cd kernel
```

### 2. PC端编译内核

#### 2.1 获取编译工具链

```shell
cd ~/桌面/LubanCat
git clone https://github.com/LubanCat/gcc-linaro-6.3.1-2017.05-x86_64_aarch64-linux-gnu.git
```

导出环境变量

```shell
export PATH=~/桌面/LubanCat/gcc-linaro-6.3.1-2017.05-x86_64_aarch64-linux-gnu/bin:$PATH
```

查看编译工具链

```shell
aarch64-linux-gnu-gcc -v
```

#### 2.2 编译内核源码

1. 配置所需工具

- 安装 `make`

```shell
sudo apt-get update
sudo apt install make
```

- 安装 `GCC` 编译器

```shell
sudo apt-get install build-essential
```

- 创建符号链接 `python -> python3`

```shell
sudo ln -s /usr/bin/python3 /usr/bin/python
```

- 安装 `flex`

```shell
sudo apt-get install flex
```

- 安装 `bison`

```shell
sudo apt-get install bison
```

- 安装 `OpenSSL` 开发库

```shell
sudo apt-get install libssl-dev
```

2. 进入源码根目录

```shell
cd LubanCat/LubanCat4_RK3588_SDK/kernel
```

3. 清除之前生成的所有文件和配置

```shell
make mrproper
```

4. 加载 *lubancat_linux_rk3588_defconfig* 配置文件，rk3588 系列均是该配置文件

```shell
make ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu- lubancat_linux_rk3588_defconfig
```

5. 编译内核，指定交叉编译工具,使用 8 线程进行编译，线程可根据电脑性能自行确定

```shell
make ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu- -j8
```



## 六. 嵌入式AI应用开发

> **参考书籍：** [[野火]《嵌入式AI应用开发实战指南—基于LubanCat-RK系列板卡》](https://doc.embedfire.com/linux/rk356x/Ai/zh/latest/index.html)
>
> **使用板卡：** LubanCat 4 RK3588S
>
> **装载系统**：Ubuntu 22.04.3 LTS (GNU/Linux 5.10.160-rockchip aarch64)



## OTHER

### VMWare 删除虚拟机

> **参考博客：** [VMware 彻底删除虚拟机操作系统的方法](https://blog.csdn.net/qq_36761831/article/details/82351329)

方法一：

![image-20241015172806622](.assets/image-20241015172806622.png)

方法二：

![image-20241015172715032](.assets/image-20241015172715032.png)



### VMWare 与 Ubuntu 窗口大小适配

> 两种方法任选一种即可，均使用的话可能存在部分冲突

##### 方法一

1. 在菜单栏找到 虚拟机 -> 设置

![image-20241015191834973](.assets/image-20241015191834973.png)

2. 调整显示器的显示缩放比例，更改为拉伸模式

![image-20241015192038623](.assets/image-20241015192038623.png)

##### 方法二

打开终端，手动输入以下命令，等待安装完成后重启Ubuntu即可。

```shell
sudo apt-get install open-vm-tools-desktop
```

卸载（建议别卸载，容易出问题，见：**ERROR LOG** : VMWare 虚拟机共享文件夹不显示）

```shell
sudo apt-get remove --purge open-vm-tools-desktop
```

**`--purge`** : 这个选项会一起删除该软件包的配置文件，确保完全清除。



### Windows 与 VMWare-Ubuntu 跨系统复制粘贴

> **参考：** [copy-paste-and-dragdrop-not-working-in-vmware-machine-with-ubuntu](https://askubuntu.com/questions/691585/copy-paste-and-dragdrop-not-working-in-vmware-machine-with-ubuntu/824341#824341)

通过安装VMtools实现了Windows与Ubuntu跨系统复制粘贴，打开终端，手动输入以下命令，再重启ubuntu系统即可。

```shell
sudo apt-get autoremove open-vm-tools
sudo apt-get install open-vm-tools
sudo apt-get install open-vm-tools-desktop
```



### VSCode 配置 SSH 免密远程登陆

> **参考**：https://blog.csdn.net/qq_44571245/article/details/123031276

打开 PC 端的终端或 Power Shell，输入以下命令：

```bash
ssh-keygen -t rsa
```

连续回车直到结束，找到 `.ssh` 这个文件夹，用记事本打开 `id_rsa.pub` 这个文件，并复制里面的内容。

![image-20241019093413672](.assets/image-20241019093413672.png)

![image-20241019095921244](.assets/image-20241019095921244.png)

vscode 中通过 SSH 连接板卡，在板卡的命令行上输入以下内容：

```bash
ssh-keygen -t rsa
```

连续回车直到结束，可看到 `/hemo/sprine` 目录下会有 `.ssh` 文件夹：

![image-20241019094756123](.assets/image-20241019094756123.png)

然后进入该文件夹，就可以看到生成的公钥和私钥：

![image-20241019094715646](.assets/image-20241019094715646.png)

然后创建一个文件 `authorized_keys`，把刚刚从记事本上复制的内容粘贴到里面，然后保存退出即可配置完成。

![image-20241019095246534](.assets/image-20241019095246534.png)



## ERROR LOG

### VMWare 虚拟机共享文件夹不显示

- [x] 2024.10.15 22:57

> **参考博客：** [虚拟机设置共享文件夹添加不显示](https://blog.csdn.net/qq_41880069/article/details/86158454)

1. 确保 `open-vm-tools` 及 `open-vm-tools-desktop` 已安装

```shell
sudo apt-get install open-vm-tools
sudo apt-get install open-vm-tools-desktop
```

2. 进行挂载配置

```shell
sudo vmhgfs-fuse .host:/ /mnt/hgfs
```

3. 检查挂载

```shell
mount | grep hgfs
```

4. 确保挂载目录存在

```shell
sudo mkdir -p /mnt/hgfs
sudo chmod 755 /mnt/hgfs
```

5. 进行上述配置后可能会提示权限不足，输入以下命令更改权限

```shell
sudo umount /mnt/hgfs 
sudo vmhgfs-fuse .host:/ /mnt/hgfs -o allow_other,uid=$(id -u),gid=$(id -g)
```

6. 最后使用命令查看是否可以正常访问

```shell
cd /mnt/hgfs
ls
```



### Vim Ctrl+z 强制退出后再次进入显示 E325：注意

- [x] 2024.10.17 1:26

当使用 `Ctrl + z` 强制退出 Vim 后，再次进入出现以下界面

![image-20241017010232288](.assets/image-20241017010232288.png)

解决方法如下：

1. **退出 Vim**：在提示符中选择 `Q` 来退出 Vim。

2. **查找 Vim 交换文件**：在终端中，使用以下命令查找交换文件：

    ```shell
    ls -a
    ```

    如果交换文件的位置不在当前目录，可以用 `find` 命令查找它：

    ```shell
    find / -name ".test.txt.swp"
    ```

    这里的 `test.txt` 是之前使用 `Ctrl + z` 强制退出的文件名，根据具体情况更改。

3. **删除交换文件**： 在终端中，使用以下命令删除交换文件：

    ```shell
    rm .test.txt.swp
    ```

    确保路径正确，如果交换文件在其他位置，请相应调整路径。

4. **重新打开文件**： 可以重新打开 `test.txt` 文件，确认没有问题。
