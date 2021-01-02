# 45爱穿越
Time Limit: 3 Sec  Memory Limit: 128 MB


## Description
xlc2845把自己的笔记本改装成了一个时光机，但是这台时光机只能穿越到1970年之后。有一天xlc2845的时光机坏掉了，没有办法显示当前的时间。 聪明的xlc2845知道有C语言里有time() 函数，可是，执行time(NULL)后，其返回值只是从1970年1月1日 0时0分0秒到当前时间的秒数，你能帮助他计算当前的时间吗？


## Input
输入有多行，每行为一个数S，表示当前时间距离1970年1月1日0时0分0秒的秒数，数据保证年份在[1970,3000]范围内。


## Output
对于每一行输入，输出当前时间
输出格式：年-月-日 时:分:秒,每个输出占一行，无多余空格


## Sample Input
```
0
86400
```
## Sample Output
```
1970-01-01 00:00:00
1970-01-02 00:00:00
```

## HINT

C语言中time函数的原型为time_t time(time*），该函数实际只能计算2038-01-19 03:14:07之前的时间，在本题中不考虑这个因素。



## Append Code
Source