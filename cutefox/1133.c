#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STR_LEN 11
int strToInt(char str[])
{
 int len,i,j=0,num=0;
 len=strlen(str);
 char str2[11]={0};
 if(len==0)
    return -1;
 for(i=0;i<len;i++)
 {
    if(str[i]>='0'&&str[i]<='9')
    {
       str2[j]=str[i];
       j++;
    }
    else
         break;
 }
 for(i=0;i<j;i++)
    {
    num=10*num+(str2[i]-'0');
    }
 return num;
}

int main()
{
    char s[MAX_STR_LEN];
    while(gets(s) != NULL)
        printf("%d\n", strToInt(s));
    return 0;
}

/**************************************************************
	Problem: 1133
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

