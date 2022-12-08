/*#include<iostream>
using namespace std;
void fun(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        fun(n-1); 
    }
}
int main()
{
    int a;
    cin>>a;
    fun(a);
    return 0;
}*/
#include<iostream>
using namespace std;
void fun(int n)
{
    if(n>0)
    {
        fun(n-1);
        cout<<n<<endl;
        
    }
}
int main()
{
    int a;
    cin>>a;
    fun(a);
    return 0;
}