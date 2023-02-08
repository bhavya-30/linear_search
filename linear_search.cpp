#include<iostream>
using namespace std;

int linear_search(int arr[],int n,int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        return i+1;
        
        
    }
    return -1;
}
int main()
{
    int a[20],n,i,x;
    int key;
    cout<<"enter the size of array:";
    cin>>n;
    cout<<"enter the elements of array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    cout<<"array:";
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<"enter the element you want to search:";
    cin>>key;
    x=linear_search(a,n,key);
    if(x<0)
    cout<<"element not found"<<endl;
    else 
    cout<<"element found at position:"<<x<<endl;
    return 0;

}