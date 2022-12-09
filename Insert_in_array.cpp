#include<iostream>
using namespace std;
//creating array in heap
struct array
{
    int A[10];
    int size;
    int length;
};
//Display function is for displaying the elements of array
void Display(struct array arr){
    cout<<"Elements are:";
    for(int i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<" ";
    }
}
//append function is used to add elements in array at the end
void append(struct array *arr,int x)
{
    if(arr->length<arr->size)
    arr->A[arr->length++]=x;
}
//Insert function is used insert elements in array at any particular index
void Insert(struct array *arr,int index,int x)
{
    if(index>=0 && index <=arr->length)
    {
        for(int i=arr->length;i>index;i--)
        {
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=x;
        arr->length++;
    }
}
//Delete function is used to delete elements in array
int Delete(struct array *arr,int index)
{
    int x=0;
    if(index>=0 && index<arr->length)
    {
        x=arr->A[index];
        for(int i=index;i<arr->length;i++)
        arr->A[i]=arr->A[i+1];
        arr->length--;
        return x;
    }
    return 0;
}
//Swap function is used to swap two elements.
void Swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
//Linearsearch function is used to perform linear search
int Linearsearch(struct array *arr,int key)
{
    for(int i=0;i<arr->length;i++)

    {
        if(key==arr->A[i])
        {
          Swap(&arr->A[i],&arr->A[i-1]);
          return i;  
        }
    }
    return -1;
}
//Binarysearch function is used to perform binary search thruugh iteration
int Binarysearch(struct array arr,int key)
{
    int mid,l,h;
    l=0;
    h=arr.length-1;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==arr.A[mid])
        return mid;
        else if(key<arr.A[mid])
        h=mid-1;
        else
        l=mid+1;
    }
    return -1;
}
//Rbinsearch function is used to perform binary search through recursion
int Rbinsearch(int a[],int l,int h,int key)
{
    int mid;
    if(l<=h)
    {
        mid=(l+h)/2;
        if(key==a[mid])
        return mid;
        else if(key<a[mid])
        return Rbinsearch(a,l,mid-1,key);
        else
        return Rbinsearch(a,mid+1,h,key);
    }
    return -1;
}
//Get function is used to get the value of any particular index
int Get(struct array arr,int index)
{
    if(index>=0 && index<arr.length)
    return arr.A[index];
    
    return -1;
}
//Set function is used to change value of element at any particular index 
void Set(struct array *arr,int index,int x)
{
    if(index>=0 && index<arr->length)
     arr->A[index]=x;
}
//Max function is used to fetch the maximum value from array.
int Max(struct array arr)
{
    int max=arr.A[0];
    for(int i=1;i<arr.length;i++)
    {
        if(arr.A[i]>max)
        max=arr.A[i];
    }
    return max;
}
int Min(struct array arr)
{
    int min=arr.A[0];
    for(int i=1;i<arr.length;i++)
    {
        if(arr.A[i]<min)
        min=arr.A[i];
    }
    return min;
}
int Sum(struct array arr)
{
    int sum=0;
    for(int i=0;i<arr.length;i++)
    {
        sum=sum+arr.A[i];
    }
    return sum;
}
float Avg(struct array arr)
{
    return Sum(arr)/arr.length;
}
void Reverse(struct array *arr)
{
    int *B;
    int i,j;
    B=new int(arr->length);
    for(i=arr->length-1,j=0;i>=0;i--,j++)
    {
        B[j]=arr->A[i];
    }
    for(int i=0;i<arr->length;i++)
    {
        arr->A[i]=B[i];
    }
}
void Reverse2(struct array *arr)
{
    int temp=0;
    int i,j;
    for(i=0,j=arr->length-1;i<j;i++,j--)
    {
        temp=arr->A[i];
        arr->A[i]=arr->A[j];
        arr->A[j]=temp;
    }
}
void Reverse3(struct array *arr)
{
    int temp=0;
    int i,j;
    for(i=0,j=arr->length-1;i<j;i++,j--)
    {
       Swap(&arr->A[i],&arr->A[j]);
    }
}
int main()
{
    struct array arr={{2,3,4,5,6},10,5};
    //append(&arr,10);
    //Insert(&arr,5,10);
    //cout<<Delete(&arr,1)<<endl;
    //cout<<Linearsearch(&arr,5)<<endl;
    //cout<<Binarysearch(arr,5)<<endl;
    //cout<<Rbinsearch(arr.A,0,arr.length,5)<<endl;
    //cout<<Get(arr,2)<<endl;
    //Set(&arr,0,15);
    //cout<<Max(arr)<<" "<<Min(arr)<<endl;
    //cout<<Sum(arr)<<" "<<Avg(arr)<<endl;
    //Reverse(&arr);
    Reverse3(&arr);

    Display(arr);
    return 0;

}
