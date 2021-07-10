# stdcpp
All C++ includes language standards for **Visual Studio *(C/2011/2014/2017/2020/)*** in one header file *(based on the gcc version)*.

**All C++ includes for Visual Studio 2019** that uses your set C++ Language Standard correctly. <br />
Such as *(/std:c++14), (/std:c++17), (/std:c++latest))* <br />
Place this file in **"C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30037\include\bits"** (*create the bits folder*) <br />
The *'14.29.30037'* portion is subject to change and use the newest version, or add them to all if you use multiple versions. <br />
Originally, this file wasn't reading the specific set C++ Language Standard in Visual Studio 2019 for me. <br />
Adding the ***MY_CPLUSPLUS*** defines allowed it to work correctly for me. <br />
Visit https://gist.github.com/raydwaipayan/a48ef18210ee07f8b3d34b114b395b46 *(for the original file I used)*  <br />

This file isn't recommended to use because it's bad practice including the whole standard library. But I find this useful when making concepts and trying things out. <br />
