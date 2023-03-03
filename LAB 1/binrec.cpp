#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
int binrec(int a[],int n,int &count,int value,int low,int high)
{
    count++;
    int flag=0,ans,mid;
    count++;
    if(low>high)
    {
        count++;
        return 0;
    }
    else
    {
        count++;
        mid=(low+high)/2;
        count++;
        if(a[mid]==value)
        {
            count++;
            return 1;
        }
        else if(value>a[mid])
        {
            count++;
            binrec(a,n,count,value,mid+1,high);
        }
        else
        {
            count++;
            binrec(a,n,count,value,low,mid-1);
        }
    }
}
int main()
{
    int count=0;int low,high;
    int n; cout<<"Enter n :"<<endl; cin>>n;
    low=0,high=n-1;
    int a[n]; cout<<"Enter array :"<<endl;
    for(int i=0;i<n;i++)  cin>>a[i];
    int val; cout<<"Enter value :"<<endl; cin>>val;
    auto start = high_resolution_clock::now();
    int ans=binrec(a,n,count,val,low,high);
    auto stop = high_resolution_clock::now();
    if(ans==1)
    cout<<"Element found"<<endl;
    else
    cout<<"Element not found"<<endl;
    cout<<"Number of steps :"<<count<<endl;
    auto duration = duration_cast<microseconds>(stop - start);
    cout<<"Time taken :"<<duration.count()<<endl;
}    