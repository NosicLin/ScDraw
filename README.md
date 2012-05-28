ScDraw 
=======
ScDraw是一个脚本绘图软件，它内部集成脚本引擎Codger，并向脚本提贡绘图接口。你可以使用它绘制出一些非常复杂并且美丽的图片。

下载与编译
========
在编译前，你需要安装wxWidget和opengl库,ubuntu平台安装为：
````
#wxWidget窗口库
sudo apt-get install libwxgtk2.8-dev  
#opengl图形库
sudo apt-get install mesa-common-dev  libgl1-mesa-dev libglu1-mesa-dev freeglut3-dev  
```
下载与编译
```
git clone git://github.com/NosicLin/ScDraw.git   #下载
cd ScDraw     #进入下载的文件
make          #编译
```
编译后可以在当前目录bin下找到可执行文件




绘图示例：
=======
1. [IFS算法绘制图形](https://github.com/NosicLin/ScDraw/wiki/IFS%E7%AE%97%E6%B3%95%E7%BB%98%E5%88%B6%E5%9B%BE%E5%BD%A2) 
2. [LS文法绘制图形](https://github.com/NosicLin/ScDraw/wiki/LS%E6%96%87%E6%B3%95%E7%BB%98%E5%88%B6%E5%9B%BE%E5%BD%A2) 
3. [时间逃逸算法Julia集](https://github.com/NosicLin/ScDraw/wiki/%E6%97%B6%E9%97%B4%E9%80%83%E9%80%B8%E7%AE%97%E6%B3%95Julia%E9%9B%86) 
4. [时间逃逸算法Julia集]( https://github.com/NosicLin/ScDraw/wiki/%E6%97%B6%E9%97%B4%E9%80%83%E9%80%B8%E7%AE%97%E6%B3%95Julia%E9%9B%862)

加入ScDraw的开发：
========
ScDraw是一款开源的软件，它还有许多功能需要去完善，非常高兴你能加入ScDraw的开发。

联系我们：
邮件：nosiclin@foxmail.com
