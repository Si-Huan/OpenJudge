# 
Time Limit: 2 Sec  Memory Limit: 256 MB


## Description
我们把B区宿舍楼的位置表示成坐标点
对于坐标点（x,y）,定义如下规则：
如果x1>x，y1=y则点（x1,y1）是（x,y）的右邻居；
如果x1<x，y1=y则点（x1,y1）是（x,y）的左邻居；
如果x1=x，y1>y则点（x1,y1）是（x,y）的前邻居；
如果x1=x，y1<y则点（x1,y1）是（x,y）的后邻居；
给你一些宿舍楼的位置，求有多少个宿舍楼前后左右邻居都存在



## Input
输入包含多组数据，每组数据第一行中包含的唯一的整数n（1≤n≤200） 指点的数量。接下来的n行包含 "x y"（不带引号），点的坐标（| x|，| y|≤1000），所有的坐标都是整数。行中的数字是一个空格分开。这是保证所有的点是不同的。输入直到文件结束。


## Output
每组数据输出一行，输出满足要求宿舍楼的个数。


## Sample Input
```
8
1 1
4 2
3 1
1 2
0 2
0 1
1 0
1 3

```
## Sample Output
```
2

```

## HINT


## Append Code
Source