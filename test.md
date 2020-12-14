# 编写函数：String to Integer (IV) (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description

让我们来编写一个程序，按照指定的转换规则，把一个字符串里的整数提取出来。

-----------------------------------------------------------------------------
编写函数strToInt()：
原型：int strToInt(char str[], int base);
功能：按照指定的转换规则，把str[]中的串转换成整数，并返回。
函数的调用格式见“Append Code”。
-----------------------------------------------------------------------------
Invalid Word（禁用单词）错误：在解决这个题目时，某些关键词是不允许被使用的。如果提交的程序中包含了下列的关键词之一，就会产生这个错误。
被禁用的库函数：sscanf()、atoi()、atof()、atol()、strtod()、strtold()、strtof()、strtol()、strtoul()等。


## Input
输入是多行，至EOF结束。每行包括两部分，用一个冒号“:”分隔开。第一部分是个整数base，表示base进制，base可以为2、8、10、16。第二部分一个字符串s。每个串s都远少于100个字符，并且s转换后的十进制整数不会超出int类型的表示范围。
s的转换规则是：所有base进制的合法字符和仅能出现在s首位的符号位（"+"和"-"）转换为一个十进制整数。因此，如果一个串s不含有base进制的合法字符，那么它只能是0。
2进制合法字符："0"、"1"；
8进制合法字符："0"～"7"；
10进制合法字符："0"～"9"；
16进制合法字符："0"～"9"，"A"～"F"（不区分大小写，"a"～"f"也可以），"A"～"F"的十进制数值为10～15。


## Output
输出为多行，与输入对应。每行输出是串s转换后的一个整数。

## Sample Input
```
2:111ad4d
8:-10987ee
10:+9a3d
16:-3Appf1
16:-a123-4
```
## Sample Output
```
7
-71
93
-15089
-660020
```

## HINT
“Append Code”中用到的头文件、全局变量或宏的定义应自行补充。

## Append Code
### append.c
```c
int main()
{
    int base;
    char s[MAX_STR_LEN];
    while( (scanf("%d:", &base) != EOF) && (gets(s) != NULL) )
        printf("%d\n", strToInt(s, base));
    return 0;
}

```
#include <stdio.h>
#include <string.h>
#define MAX_STR_LEN 100
int strToInt(char a[], int base)
{

    int l=strlen(a);
    if(l==0) return 0;
    int i=0,n=1,sum=0;
    if(base==2)
    {
        for(i=l-1; i>=0; --i)
        {
            if(a[i]>='0' && a[i]<='1')
            {
                sum=sum+(a[i]-'0')*n;
                n=n*base;
            }
        }
        if(a[0]=='-') sum=sum*-1;
        return sum;
    }
    if(base==8)
    {
        for(i=l-1; i>=0; --i)
        {
            if(a[i]>='0' && a[i]<='7')
            {
                sum=sum+(a[i]-'0')*n;
                n=n*base;
            }
        }
        if(a[0]=='-') sum=sum*-1;
        return sum;
    }
    if(base==10)
    {
        for(i=l-1; i>=0; --i)
        {
            if(a[i]>='0' && a[i]<='9')
            {
                sum=sum+(a[i]-'0')*n;
                n=n*base;
            }
        }
        if(a[0]=='-') sum=sum*-1;
        return sum;
    }
    if(base==16)
    {
        for(i=l-1; i>=0; --i)
        {
            if(a[i]>='0' && a[i]<='9')
            {
                sum=sum+(a[i]-'0')*n;
                n=n*base;
            }
            if(a[i]=='a' || a[i]=='A') {sum=sum+10*n;n=n*base;}
            if(a[i]=='b' || a[i]=='B') {sum=sum+11*n;n=n*base;}
            if(a[i]=='c' || a[i]=='C') {sum=sum+12*n;n=n*base;}
            if(a[i]=='d' || a[i]=='D') {sum=sum+13*n;n=n*base;}
            if(a[i]=='e' || a[i]=='E') {sum=sum+14*n;n=n*base;}
            if(a[i]=='f' || a[i]=='F') {sum=sum+15*n;n=n*base;}
        }
        if(a[0]=='-') sum=sum*-1;
        return sum;
    }
}


int main()
{
    int base;
    char s[MAX_STR_LEN];
    while( (scanf("%d:", &base) != EOF) && (gets(s) != NULL) )
        printf("%d\n", strToInt(s, base));
    return 0;
}

/**************************************************************
	Problem: 1136
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_STR_LEN 105
int is(char *s,int base)
{
    if(base == 2)
    {
        if(*s == '0' || *s == '1') return 1;
        else return 0;
    }
    else if(base == 8)
    {
        if(isdigit(*s) && *s<'8') return 1;
        else return 0;
    }
    else if(base == 10)
    {
        if(isdigit(*s)) return 1;
        else return 0;
    }
    else if(base == 16)
    {
        if(isdigit(*s))
            return 1;
        else if(*s>='A' && *s<='F')
        {
            *s -= 'A' - '9' - 1;
            return 1;
        }
        else if(*s>='a' && *s<='f')
        {
            *s -= 'a' - '9' - 1;
            return 1;
        }
        else return 0;
    }
}
int strToInt(char str[],int base)
{
    int num=0;
    char *s;
    int isFu = 0;
    for(s=str; *s!='\0'; ++s)
    {
        if(s == str && *str == '-')
        {
            isFu = 1;
            continue;
        }
        else if(s==str && *str== '+') continue;
        if(!is(s,base)) continue;
        num = num*base + *s-'0';
    }
    if(isFu) num=-num;
    return num;
}

int main()
{
    int base;
    char s[MAX_STR_LEN];
    while( (scanf("%d:", &base) != EOF) && (gets(s) != NULL) )
        printf("%d\n", strToInt(s, base));
    return 0;
}

/**************************************************************
	Problem: 1136
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

