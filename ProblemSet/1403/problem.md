# 它满足条件吗？
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
需要判断给定的一个整数是否同时满足如下三个条件：
1. 它是一个完全平方数。
2. 它是一个偶数。
3. 它是一个正数。
注：若一个数能表示成某个自然数的平方的形式，则称这个数为完全平方数。例如：
0,1,4,9,16,25,36,49,64,81,100,121,144,169,196,225,256,289,324,361,400,441,484,529


## Input
一个int范围内的整数。


## Output
如果输入的数字满足条件，则输出yes，否则输出no。


## Sample Input
```
100
```
## Sample Output
```
yes
```

## HINT
注意逻辑表达式判断三个条件的顺序。
如果你不会使用分支语句，同样可以使用条件运算符实现该程序。
库函数sqrt()可以用于求一个数的平方根。