#include<iostream>
using namespace std;
struct array
{
    int *A;
    int size;
    int length;
};
void Display(struct array arr)
{
    cout<<"Elements are:"<<endl;
    for(int i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<endl;
    }
}
int main()
{
    struct array arr;
    int n;
    cout<<"Enter the size of array."<<endl;
    cin>>arr.size;
    arr.A=new int[arr.size];
    arr.length=0;
    cout<<"Enter the number of numbers."<<endl;
    cin>>n;
    cout<<"Enter all the elements,"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr.A[i];
    }
    arr.length=n;
    Display(arr);

    
    return 0;
}