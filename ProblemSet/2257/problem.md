# 三角恋
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
亮亮是山科大的一名ACMer，他默默地喜欢着队里的辉辉，一直把这段感情藏在心底，不敢说出来。直到双十一这一天，他终于下定决心找辉辉表白，表白之前，他想先填饱肚子，于是他决定先去A餐吃点好的。没想到的是，他竟然看到辉辉在和他的情敌灰灰一起共进晚餐，亮亮失恋了，他心里很难过，从此痛恨三角恋的关系，以至于看到这种三角恋就吃不下饭，（虽然，他不知道灰灰心里的人其实是他）。现在，我们把A喜欢B，B喜欢C，C喜欢A的关系称作三角恋，现在，给出你一些人各自喜欢的人的编号，并找出是否存在“三角恋”关系，若存在输出“YES”，不存在输出“NO”。题目保证没有自己喜欢自己的情况出现，因为亮亮觉得没有人会自恋。

.




## Input
第一行为一正整数T，代表样例数。
接下来有T行。
每行第一个非负整数n（n ≤ 50）代表人数，每个人的编号为1～n，接下来给出n个数字，分别表示第i个人喜欢的人是谁。



## Output
若存在三角恋关系，输出“YES”，否则输出“NO”，每一个样例答案占一行。


## Sample Input
```
3
5 4 5 2 1 3
3 2 3 1
10 2 6 2 2 2 2 2 2 2 2
```
## Sample Output
```
YES
YES
NO

```

## HINT
第一行T = 3为样例数。
第一个样例有5个人编号为1,2,3,4,5，数据表明：1喜欢4、2喜欢5、3喜欢2、4喜欢1、5喜欢3，其中2,3,5三个人就是三角恋关系，那么我们输出YES。
同理，第二个样例中，1喜欢2、2喜欢3、3喜欢1，也存在三角恋。
然而对于第三个样例，你能找到三角恋算我输。
