// All C++ includes for Visual Studio 2019 that uses your set C++ Language Standard correctly
// Such as (/std:c++14), (/std:c++17), (/std:c++latest))
// Place this file in "C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30037\include\bits" (create the bits folder)
// The '14.29.30037' portion is subject to change and use the newest version, or add them to all if you use multiple versions.
// Originally, this file wasn't reading the specific set C++ Language Standard in Visual Studio 2019 for me.
// Adding the ***MY_CPLUSPLUS*** defines allowed it to work correctly for me.
// Visit https://gist.github.com/raydwaipayan/a48ef18210ee07f8b3d34b114b395b46 (for the original file I used)

// For lazy people
// #define _SILENCE_CXX17_C_HEADER_DEPRECATION_WARNINS // or _SILENCE_CXX17_C_HEADER_DEPRECATION_WARNING
// #define _CRT_SECURE_NO_WARNINGS 

#ifndef MY_CPLUSPLUS 
#if defined(_MSVC_LANG) && !defined(__clang__)
#define MY_CPLUSPLUS (_MSC_VER == 1900 ? 201103L : _MSVC_LANG)
#else
#define MY_CPLUSPLUS __cplusplus
#endif
#endif

// C
#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cwchar>
#include <cwctype>

#if MY_CPLUSPLUS >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdalign>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cuchar>
#endif

// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if MY_CPLUSPLUS >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <codecvt>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif

#if MY_CPLUSPLUS >= 201402L
#include <shared_mutex>
#endif

#if MY_CPLUSPLUS >= 201703L
#include <any>
#include <charconv>
// #include <execution>
#include <filesystem>
#include <optional>
#include <memory_resource>
#include <string_view>
#include <variant>
#endif

#if MY_CPLUSPLUS > 201703L
#include <bit>
#include <compare>
#include <concepts>
#if __cpp_impl_coroutine
# include <coroutine>
#endif
#include <numbers>
#include <ranges>
#include <span>
#include <stop_token>
// #include <syncstream>
#include <version>
#endif
