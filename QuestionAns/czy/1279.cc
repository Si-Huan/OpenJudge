#include <iostream>
#include "stdio.h"
#include "string.h"
#include "stdlib.h"

using namespace std;

int max(int a,int b)
{
    if(a>b) return a;
    else return b;
}

double max(double a,double b)
{
    if(a>b) return a;
    else return b;
}

int main()
{
	int a,b;
	double c,d;
	cin>>a>>b;
	cout<<max(a,b)<<endl;
	cin>>c>>d;
	cout<<max(c,d)<<endl;
	return 0;
}
/**************************************************************
	Problem: 1279
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

