# 书2
Time Limit: 2 Sec  Memory Limit: 128 MB


## Description
  wx在前面得到最大魔力以后，气势汹汹地去打恶龙了。很遗憾，wx被恶龙打败了（恶龙咆哮啊呜~），然后恶龙把wx跟公主hjh关到了一起，在自己心爱的女人面前，wx怎么会甘心呢，仔细研究发现，原来是魔力值的计算方式出了错误！原来在计算子咒语的魔力值时，子咒语里面的相同魔力值的咒文只能贡献一次魔力。所以，快帮wx重新计算一下最大魔力去打败恶龙吧！﻿


## Input
第一行输入一个T，表示有T组输入。接下来有T个输入。

每一组输入分为两行，第一行包含一个数字N (1 <= N <= 100000),表示咒语的长度。第二行输入咒语中的N个咒文的魔力值ai（0< ai <=1000000）


## Output
对于每一个输入，在一行中输出这句咒语的最大魔力值.


## Sample Input
```
3
5
1 2 3 4 5
3
2 3 3
4
2 3 3 2
```
## Sample Output
```
105
21
38
```

## HINT
第二组数据：
2 + 3 + 3 + (2 + 3) + (3 + 3) + (2+3+3) = 2 + 3 + 3 + (2+3) + 3 + (2 + 3) = 21
题目有点难度，可以考虑忽略重复数字以后出现次数应该怎么计算

## Append Code
