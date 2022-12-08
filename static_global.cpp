#include<iostream>
using namespace std;
//int r=0;
int fun(int n)
{
    static int x=0;
    if(n>0)
    {
        x++;
        //r++;
        return fun(n-1)+x;
    }
    return 0;
}
int main()
{
    int a=5;
    cout<<fun(a)<<endl;
    cout<<fun(a)<<endl;
    return 0;

}
