#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d",&a);
    b=a%100;
if(b==0)
    a%400==0 ? printf("Yes"):printf("No");
else
    a%4==0 ?  printf("Yes"):printf("No");

    return 0;
}

/**************************************************************
	Problem: 1010
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

