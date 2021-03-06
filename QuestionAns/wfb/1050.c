#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSIZE 1005
int ReadArray(int a[])
{
    int i;
    int n;
    if(scanf("%d",&n) == EOF)
        return -1;
    for(i=0; i<n; ++i)
    {
        scanf("%d",a+i);
    }
    getchar();
    return n;
}
void Add(int a[],int b[],int n)
{
    int i;
    for(i=0; i<n; ++i)
        a[i] += b[i];
}
void Print(int *a,int n)
{
    int cnt=0;
    int i;
    for(i=0; i<n; ++i)
    {
        if(cnt++)
            putchar(' ');
        printf("%d",a[i]);
    }
    putchar('\n');
}
int main()
{
    int *a,*b;
    int length;
    int length1;
    int length2;
    int flag = 0;
char n;
    while(1)
    {
        a = (int *)malloc(sizeof(int)*MAXSIZE);
        memset(a,0,sizeof(int)*MAXSIZE);
        length1 = ReadArray(a);
        if(length1 == -1) break;
        b = (int *)malloc(sizeof(int)*MAXSIZE);
        memset(b,0,sizeof(int)*MAXSIZE);
        length2 = ReadArray(b);
        if(length2 == -1)
        {
            flag = 1;
            break;
        }
        if(length1 < length2)
            length = length2;
        else
            length = length1;
        Add(a,b,length);
        Print(a,length);
    }
    if(flag)
        Print(a,length1);
    return 0;
}

/**************************************************************
	Problem: 1050
	User: 201601011420
	Language: C
	Result: Accepted
	Time:20 ms
	Memory:748 kb
****************************************************************/

