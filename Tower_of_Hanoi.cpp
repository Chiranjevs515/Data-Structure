#include<iostream>
using namespace std;
//here a,b,c are numbering on tower.
void TOH(int n,int a,int b,int c)
{
    if(n>0)
    {
        TOH(n-1,a,c,b);
        cout<<"("<<a<<","<<c<<
        ")"<<endl;
        TOH(n-1,b,a,c);
    }
}
int main ()
{
    int r;
    TOH(3,1,2,3);
    return 0;
}
