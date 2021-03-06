#include<map>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<vector>
#include<iomanip> 
#include<cstring>
#include<iterator>
#include<iostream>
#include<algorithm>
#define R register 
#define LL long long 
#define pi 3.141
#define INF 1400000000
using namespace std;

     
    class Computer
    {
    private:
        char *n;
        static int cnt;
    public:
        Computer(char* nn)
        {
            n=new char[strlen(nn)+1];
            strcpy(n,nn);
            cnt++;
        }
        ~Computer()
        {
            delete []n;
            cnt--;
        }
        Computer(const Computer& p)
        {
            n=new char[strlen(p.n)+1];
            strcpy(n,p.n);
            cnt++;
        }
        Computer setName(char* nn)
        {
            n=new char[strlen(nn)+1];
            strcpy(n,nn);
            return *this;
        }
        void print()
        {
            cout<<n<<endl;
        }
        static int getCnt()
        {
            return cnt;
        }
    };
    int Computer::cnt=0;
int main()
{
    char str[101];
    cout<<"1:"<<Computer::getCnt()<<" computers."<<endl;
    Computer com1("Tom"), com2(com1);
    cout<<"2:"<<com2.getCnt()<<" computer."<<endl;
    cin>>str;
    com2.setName(str).print();
    com2.print();
    cout<<"3:"<<com2.getCnt()<<" computer."<<endl;
    return 0;
}
/**************************************************************
	Problem: 2196
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

