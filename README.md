# stdcpp
All C++ includes language standards for Visual Studio (C/2011/2014/2017/2020/) in one header file (based on the gcc version).

// All C++ includes for Visual Studio 2019 that uses your set C++ Language Standard correctly. 
// Such as (ISO C++17 Standard (/std:c++14), ISO C++17 Standard (/std:c++17), Preview - Features from the Latest C++ Working Draft (/std:c++latest))
// Place this file in "C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30037\include\bits" as of 7/10/2021 (create the bits folder)
// The '14.29.30037' portion will change in the future and make sure to use the newest version, or add them to all if you use multiple versions.
// Originally, this file wasn't reading the specific set C++ Language Standard in Visual Studio 2019.
// Adding the MY_CPLUSPLUS defines allowed it to work correctly for me.
// Visit https://gist.github.com/raydwaipayan/a48ef18210ee07f8b3d34b114b395b46 for the original file I used. 

This file isn't recommended to use because it's bad practice including the whole standard library. But I find this useful when making concepts and trying things out. 
