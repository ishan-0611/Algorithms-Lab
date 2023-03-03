#include <iostream>
using namespace std;
int max(int a,int b)
{ 
    return (a>b) ? a:b; 
}
int knapsack(int wt[],int val[],int n,int capacity)
{
    if(n==0 || capacity==0)
    return 0;

    if(wt[n-1]>capacity)
    return knapsack(wt,val,n-1,capacity);
    else
    return max(val[n-1]+knapsack(wt,val,n-1,capacity-wt[n-1]),knapsack(wt,val,n-1,capacity));                                       
}
int main()
{
    int n; cout<<"Enter number of items :"<<endl; cin>>n;
    int wt[n],val[n];
    int capacity; cout<<"Enter capacity :"<<endl; cin>>capacity;
    cout<<"Enter weights of items :"<<endl;
    for(int i=0;i<n;i++) cin>>wt[i];
    cout<<"Enter values of items :"<<endl;
    for(int i=0;i<n;i++) cin>>val[i];
    int ans=knapsack(wt,val,n,capacity);
    cout<<"Optimal solution :"<<ans<<endl;
}