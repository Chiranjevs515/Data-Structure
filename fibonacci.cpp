#include<iostream>
using namespace std;
int A[10];
int fib(int n)
{
    int a=0,b=1,sum=1;
    if(n<=1)
    return n;
    for(int i=2;i<=n;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
    }
    return sum;
}
int fib1(int n)
    {
        if(n<=1)
        {
            A[n]=n;
            return n;
        }
        else
        {
            if(A[n-2]==-1)
            A[n-2]=fib1(n-2);
            if(A[n-1]==-1)
            A[n-1]=fib1(n-1);
            return A[n-2]+A[n-1];
        }
    }

int main()
{
    int r;
    for(int i=0;i<10;i++)
    {
        A[i]=-1;
    }
    cout<<fib1(5);
    return 0;
}