# 加析构
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
封装一个复数类CPLX，用来处理复数功能和运算，CPLX类包括
1.属性包括两个double型变量， double r_  ,    double  i_，分别代表实部和虚部
2.支持如下操作：
     构造函数CPLX(double, double)  参数为实部、虚部，用传入的参数初始化对象，产生一行以“CREATE()”开始的输出，并输出复数的实部和虚部；
     析构函数  产生一行以“RELEASE()”开始的输出，并输出复数的实部和虚部；
      print()      产生一行以“PRINT()”开始的输出，并以格式“(a, bi)”的形式输出复数；
-----------------------------------------------------------------------------
你设计一个CPLX类，使得main()函数能够运行并得到正确的输出。调用格式见append.cc


## Input
输入的第一个整数n，表示用n组测试样例。每组测试输入两个实数，分别为实部和虚部。


## Output
每组测试数据对应一组输出，两组输出之间用若干“===”分割，详细格式见sample。


## Sample Input
```
5
2 3
10 0
0 100
1 -1
-7 -7
```
## Sample Output
```
=========================
CREATE(): 2 3
PRINT(): (2, 3i)
RELEASE(): 2 3
=========================
CREATE(): 10 0
PRINT(): (10, 0i)
RELEASE(): 10 0
=========================
CREATE(): 0 100
PRINT(): (0, 100i)
RELEASE(): 0 100
=========================
CREATE(): 1 -1
PRINT(): (1, -1i)
RELEASE(): 1 -1
=========================
CREATE(): -7 -7
PRINT(): (-7, -7i)
RELEASE(): -7 -7
=========================

```

## HINT


## Append Code
append.cc