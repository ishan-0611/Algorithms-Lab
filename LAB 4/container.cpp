#include <iostream>
using namespace std;
void sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            swap(arr[i],arr[j]);
        }
    }
}
void cont(int weights[],int capacity,int n)
{
    int x[n];int temp=capacity;
    sort(weights,n);
    for(int i=0;i<n;i++) x[i]=0;
    for(int i=0;i<n && weights[i]<=capacity;i++)
    {
       x[i]=1; capacity-=weights[i];
    }
    cout<<"Weights selected :"<<endl;
    for(int i=0;i<n;i++)
    {
        if(x[i]==1)
        cout<<weights[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n; cout<<"Enter number of boxes :"<<endl; cin>>n;
    int weights[n];
    cout<<"Enter weights array :"<<endl;
    for(int i=0;i<n;i++) cin>>weights[i];
    int capacity; cout<<"Enter capacity :"<<endl; cin>>capacity;
    cont(weights,capacity,n);
}