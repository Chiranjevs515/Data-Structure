#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0)
    return 1;
    else
    return fact(n-1)*n;
}
int fact1(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    f=f*i;
    return f;
}
int main()
{
    int a;
    a=fact1(5);
    cout<<a;
    return 0;

}