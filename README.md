# linux-helper
此应用可以帮助你快速上手linux，可以使用中文命令操控Linux。
## 安装方法
1.将文件加添加到目录中(这里以添加到根目录为例)
```shell
git clone https://github.com/huang186/linux-helper.git
```
或者直接将发行版的zip文件下载并解压(推荐,如果你只想用该项目，并不想进行程序修改)
2.运行程序，进入该目录
```shell
cd linux-helper
./main_x86   #如果你的电脑是x86架构就运行该程序
./main_arm   #如果你的电脑是arm架构就运行该程序
```
## 如果程序无法运行请克隆项目后进入项目目录使用该程序进行编译
```
g++ main.cpp -o main
chmod +x ./main
./main
```
## 该程序现在正在优化中，cd命令还未对齐进行修改，即使用cd命令是不会显示当前目录
### 还有更多实用功能，不仅小白能用，该应用也能成为开发中的快捷指令方式，加速开发，降低使用指令难度
## 常用列表
```
列出目录 ls
显示所有 ls -a
详细信息 ls -l
显示路径 pwd
切换目录 cd
返回上级 cd ..
回主目录 cd ~
创建目录 mkdir
删除目录 rmdir
创建文件 touch
删除文件 rm
强制删除 rm -f
递归删除 rm -rf
复制文件 cp
递归复制 cp -r
移动文件 mv
重命名 mv
查找文件 find
搜索文本 grep
忽略大小写 grep -i
反向选择 grep -v
递归搜索 grep -r
显示行号 grep -n
查看内容 cat
合并文件 cat
反向输出 tac
分页查看 less
向上翻页 less
向下翻页 less
查看头部 head
查看尾部 tail
实时追踪 tail -f
转换字符 tr
排序文本 sort
去重文本 sort -u
逆序排列 sort -r
统计行数 wc
统计字数 wc -w
截取字符 cut
粘贴列 paste
替换字符 sed
流编辑器 sed
全局替换 sed -i
文本打印 awk
字段打印 awk
打包文件 tar
查看包内容 tar -tvf
解压文件 tar -xzf
压缩gzip gzip
解压gzip gunzip
压缩bzip2 bzip2
解压bzip2 bunzip2
创建链接 ln
软链接 ln -s
修改权限 chmod
递归权限 chmod -R
修改所有者 chown
递归所有者 chown -R
修改用户组 chgrp
显示进程 ps
显示所有进程 ps -ef
树状进程 ps -ejH
实时监控 top
动态监控 top
查看内存 free
内存详情 free -h
磁盘空间 df
磁盘用量 df -h
磁盘用量 du
目录大小 du -sh
查看端口 netstat
监听端口 netstat -tuln
查看进程 lsof
查看进程 lsof -i
远程登录 ssh
复制文件 scp
远程复制 scp
下载文件 wget
断点续传 wget -c
批量下载 wget -i
网络测试 ping
路由追踪 traceroute
查看手册 man
显示帮助 help
命令说明 type
命令别名 alias
历史命令 history
重复命令 !!
重复上一条 !-1
参数替换 ^old^new
显示时间 date
显示日历 cal
计算器 bc
回显文本 echo
环境变量 env
设置变量 export
显示用户 whoami
当前用户 id
开关用户 su
提权执行 sudo
以root执行 sudo -i
关机命令 shutdown
立即关机 shutdown -h now
重启命令 shutdown -r now
取消关机 shutdown -c
查看内核 uname
查看内核 uname -a
查看版本 cat /etc/issue
清屏命令 clear
重启终端 reset
打印文本 printf
比较文件 diff
合并差异 patch
生成校验和 md5sum
验证校验和 md5sum -c
创建分区 fdisk
格式化分区 mkfs
挂载分区 mount
卸载分区 umount
查看硬件 lshw
查看CPU lscpu
查看内存 dmidecode
查看USB lsusb
查看PCI lspci
查看块设备 lsblk
查看UUID blkid
管理用户 useradd
删除用户 userdel
修改用户 usermod
管理组群 groupadd
删除组群 groupdel
修改密码 passwd
锁定用户 passwd -l
解锁用户 passwd -u
计划任务 crontab
编辑任务 crontab -e
查看任务 crontab -l
删除任务 crontab -r
后台运行 &
前台运行 fg
后台运行 bg
查看作业 jobs
终止进程 kill
强制终止 kill -9
杀死所有 killall
按名杀死 pkill
调整优先级 nice
调整优先级 renice
系统日志 journalctl
查看日志 dmesg
最后登录 last
最后命令 lastcomm
显示登录 who
显示登录 w
发送消息 write
广播消息 wall
压缩文件 zip
解压文件 unzip
查看zip unzip -l
压缩rar rar
解压rar unrar
同步数据 sync
刷新缓存 sync
休眠系统 zzz
系统信息 neofetch
系统信息 screenfetch
包管理 apt
安装包 apt install
卸载包 apt remove
更新源 apt update
升级系统 apt upgrade
搜索包 apt search
显示包信息 apt show
安装包 dpkg
卸载包 dpkg -r
列出包 dpkg -l
配置包 dpkg --configure
修复包 apt --fix-broken
清理包 apt autoremove
清理缓存 apt clean
查看服务 systemctl
启动服务 systemctl start
停止服务 systemctl stop
重启服务 systemctl restart
查看状态 systemctl status
启用服务 systemctl enable
禁用服务 systemctl disable
查看防火墙 ufw
开启防火墙 ufw enable
关闭防火墙 ufw disable
允许端口 ufw allow
拒绝端口 ufw deny
查看规则 ufw status
配置网络 ip
查看IP ip addr
查看路由 ip route
旧版网络 ifconfig
旧版路由 route
DNS配置 vi /etc/resolv.conf
主机名配置 vi /etc/hostname
网络重启 systemctl restart networking
网卡重启 systemctl restart network
网络诊断 nslookup
网络诊断 dig
网络诊断 host
网络连通 ping -c
网络连通 ping6
追踪路由 tracepath
带宽监控 iftop
流量监控 nethogs
连接追踪 conntrack
网络抓包 tcpdump
抓包分析 wireshark
抓包分析 tshark
网络监听 nc
网络监听 ncat
端口扫描 nmap
扫描端口 nmap -sS
扫描版本 nmap -sV
扫描系统 nmap -O
暴力破解 hydra
密码破解 john
彩虹表 rainbowcrack
无线攻击 aircrack-ng
无线监听 airmon-ng
抓包分析 tcpflow
协议分析 ngrep
网络性能 iperf
网络性能 iperf3
网络模拟 tc
网络模拟 netem
防火墙 iptables
列出规则 iptables -L
添加规则 iptables -A
删除规则 iptables -D
清空规则 iptables -F
保存规则 iptables-save
恢复规则 iptables-restore
NAT配置 iptables -t nat
转发配置 echo 1 > /proc/sys/net/ipv4/ip_forward
SSH配置 vi /etc/ssh/sshd_config
SSH密钥 ssh-keygen
复制公钥 ssh-copy-id
SSH代理 ssh-agent
SSH添加 ssh-add
Git克隆 git clone
Git拉取 git pull
Git推送 git push
Git状态 git status
Git提交 git commit
Git分支 git branch
Git切换 git checkout
Git合并 git merge
Git差异 git diff
Git日志 git log
Git重置 git reset
Git暂存 git stash
Git标签 git tag
Git远程 git remote
Git配置 git config
Docker版本 docker -v
Docker信息 docker info
Docker镜像 docker images
Docker容器 docker ps
Docker运行 docker run
Docker停止 docker stop
Docker启动 docker start
Docker重启 docker restart
Docker删除 docker rm
Docker删除镜像 docker rmi
Docker构建 docker build
Docker推送 docker push
Docker拉取 docker pull
Docker日志 docker logs
Docker执行 docker exec
Docker查看 docker inspect
Docker统计 docker stats
Docker网络 docker network
Docker卷 docker volume
Docker组合 docker-compose
Docker组合构建 docker-compose build
Docker组合运行 docker-compose up
Docker组合停止 docker-compose down
K8s集群 kubectl cluster-info
K8s节点 kubectl get nodes
K8s命名空间 kubectl get ns
K8s部署 kubectl get deploy
K8s服务 kubectl get svc
K8sPod kubectl get pods
K8s描述 kubectl describe
K8s日志 kubectl logs
K8s执行 kubectl exec
K8s应用 kubectl apply
K8s删除 kubectl delete
K8s扩展 kubectl scale
K8s滚动更新 kubectl rollout
K8s回滚 kubectl rollout undo
K8s配置 kubectl config
K8s上下文 kubectl config use-context
Ansible清单 vi /etc/ansible/hosts
Ansible执行 ansible
Ansible剧本 ansible-playbook
Ansible拉取 ansible-pull
Ansible清单 ansible-inventory
Ansible配置 ansible-config
Ansible文档 ansible-doc
Puppet应用 puppet apply
Puppet资源 puppet resource
Puppet描述 puppet describe
Chef执行 chef-client
ChefKnife knife
Terraform初始化 terraform init
Terraform计划 terraform plan
Terraform应用 terraform apply
Terraform销毁 terraform destroy
Vagrant初始化 vagrant init
Vagrant启动 vagrant up
Vagrant停止 vagrant halt
Vagrant销毁 vagrant destroy
Vagrant状态 vagrant status
VagrantSSH vagrant ssh
Vagrant配置 vagrant reload
Packer构建 packer build
Packer验证 packer validate
Prometheus启动 prometheus
Prometheus配置 promtool
Grafana启动 grafana-server
Elasticsearch启动 elasticsearch
Kibana启动 kibana
Logstash启动 logstash
Zabbix代理 zabbix_agentd
Nagios检查 check_nagios
Cacti轮询 cacti-poller
OpenVPN启动 openvpn
WireGuard配置 wg
IPSec配置 ipsec
SSL测试 openssl
生成密钥 openssl genrsa
生成证书 openssl req
查看证书 openssl x509
加密文件 openssl enc
解密文件 openssl enc -d
Base64编码 base64
Base64解码 base64 -d
哈希值 sha256sum
哈希值 sha512sum
GPG加密 gpg --encrypt
GPG解密 gpg --decrypt
GPG验证 gpg --verify
GPG清除 gpg --clearsign
GPG接收 gpg --recv-keys
GPG发送 gpg --send-keys
GPG刷新 gpg --refresh-keys
GPG更新 gpg --update-trustdb
GPG编辑 gpg --edit-key
GPG删除 gpg --delete-key
GPG导出私钥 gpg --export-secret-keys
GPG导入私钥 gpg --import
GPG列表 gpg --list-secret-keys
GPG指纹 gpg --fingerprint
GPG信任 gpg --edit-key
GPG签名 gpg --sign
GPG签名(2) gpg --detach-sign
GPG加密(2) gpg --symmetric
GPG解密(2) gpg --decrypt
GPG导入(2) gpg --import
GPG导出(2) gpg --export
GPG密钥(2) gpg --list-keys
```
