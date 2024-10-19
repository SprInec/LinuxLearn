# README

### 1. 固件下载

[英特尔无线 Wi-Fi 固件存储库](https://www.intel.cn/content/www/cn/zh/support/articles/000005511/network-and-i-o/wireless-networking.html)

>  也可直接使用该目录下已经下载好的 `.tar.gz` 文件

### 2. 终端操作

#### 1. 解压文件

首先，将 `.tar.gz` 文件解压缩。在终端中，使用以下命令将文件解压缩到当前目录：

```bash
tar -xzvf filename.tar.gz
```

其中，`filename.tar.gz` 是固件文件的名称。

#### 2. 进入解压后的目

解压缩后，会得到一个新的目录。使用以下命令进入该目录：

```bash
cd extracted_directory
```

其中，`extracted_directory `是解压缩后的目录名称。

#### 3. 将 `.ucode` 文件复制到适当的位置

首先，将 `.ucode` 文件复制到 `/lib/firmware` 目录中。可以使用以下命令进行复制：

```bash
sudo cp filename.ucode /lib/firmware
```

其中，`filename.ucode` 是您的固件文件的名称。

#### 4. 更新固件

接下来，需要更新固件，以使系统识别并使用新的固件文件。使用以下命令进行更新：

```bash
sudo update-initramfs -u
```

这将更新初始 RAM 文件系统，以包含新的固件文件。

#### 5. 重新启动系统

完成上述步骤后，建议重新启动系统以使更改生效。可以使用以下命令重新启动系统：

```bash
sudo reboot
```

系统重新启动后，应该能够正确加载并使用新的固件文件。