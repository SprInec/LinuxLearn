# README

 Linux learning record

## 一. VMWare 虚拟机安装

>  **所选系统：**Ubuntu20.04
>
>  **VMware 版本：**Workstation 17 Pro
>
>  **参考博客：**[VMware虚拟机安装Ubuntu20.04详细图文教程](https://blog.csdn.net/weixin_41805734/article/details/120698714)

### 1. 系统镜像下载

[Ubuntu 20.04.6](https://releases.ubuntu.com/focal/)

![image-20241015171609242](.assets/image-20241015171609242.png)

### 2. VMWare 安装 Ubuntu

#### 1. 新建虚拟机及其相关配置

![image-20241015173140848](.assets/image-20241015173140848.png)

![image-20241015173308622](.assets/image-20241015173308622.png)

![image-20241015173347136](.assets/image-20241015173347136.png)

![image-20241015173534299](.assets/image-20241015173534299.png)

![image-20241015173817106](.assets/image-20241015173817106.png)

![image-20241015173838885](.assets/image-20241015173838885.png)

![image-20241015173942891](.assets/image-20241015173942891.png)

![image-20241015174056001](.assets/image-20241015174056001.png)

![image-20241015174142025](.assets/image-20241015174142025.png)

![image-20241015174204587](.assets/image-20241015174204587.png)

![image-20241015174222456](.assets/image-20241015174222456.png)

![image-20241015174300471](.assets/image-20241015174300471.png)

![image-20241015174348461](.assets/image-20241015174348461.png)

![image-20241015174407728](.assets/image-20241015174407728.png)

![image-20241015174447361](.assets/image-20241015174447361.png)

![image-20241015175040888](.assets/image-20241015175040888.png)

![image-20241015175109167](.assets/image-20241015175109167.png)

#### 2. Ubuntu系统安装

##### 1. 启动虚拟机

![image-20241015175141784](.assets/image-20241015175141784.png)

![image-20241015182746252](.assets/image-20241015182746252.png)



##### 2. 语言及键盘配置

![image-20241015182915525](.assets/image-20241015182915525.png)

![image-20241015182945899](.assets/image-20241015182945899.png)



##### 3. Ubuntu 显示分辨率调整

新启动的 Ubuntu 系统可能显示区域大小与 VMWare 窗口不匹配，通过以下方法调整。

###### 1. 先退出安装窗口

![image-20241015183039060](.assets/image-20241015183039060.png)

![image-20241015183057778](.assets/image-20241015183057778.png)

###### 2. 右上角打开设置页面

![image-20241015183155866](.assets/image-20241015183155866.png)

###### 3. 找到显示器选项，更改为任意分辨率即可

![image-20241015183259821](.assets/image-20241015183259821.png)

##### 4. 继续完成安装

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

#### 3. 更改 Ubuntu 软件源

Ubuntu 默认使用国外软件源，将其更改为国内软件源可提高下载速度

![image-20241015192610213](.assets/image-20241015192610213.png)

![image-20241015192729485](.assets/image-20241015192729485.png)

![image-20241015192759432](.assets/image-20241015192759432.png)

![image-20241015192832004](.assets/image-20241015192832004.png)

![image-20241015192845500](.assets/image-20241015192845500.png)



## OTHER

### VMWare 删除虚拟机

> **参考博客：**[VMware 彻底删除虚拟机操作系统的方法](https://blog.csdn.net/qq_36761831/article/details/82351329)

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

### Windows 与 VMWare-Ubuntu 跨系统复制粘贴

> **参考：**https://askubuntu.com/questions/691585/copy-paste-and-dragdrop-not-working-in-vmware-machine-with-ubuntu/824341#824341

通过安装VMtools实现了Windows与Ubuntu跨系统复制粘贴，打开终端，手动输入以下命令，再重启ubuntu系统即可。

```shell
sudo apt-get autoremove open-vm-tools
sudo apt-get install open-vm-tools
```



