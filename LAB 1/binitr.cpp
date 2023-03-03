#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
int binitr(int a[],int n,int &count,int &value)
{
    count++;
    int low=0,high=n-1,flag=0,ans;
    while(low<=high)
    {
        count++;
        count++;
        int mid=(high+low)/2;
        count++;
        if(a[mid]==value)
        {
            count++;
            flag=1;
            break;
        }
        else if(a[mid]<value)
        {
            count++;
            low=mid+1;
        }
        else
        {
            count++;
            high=mid-1;
        }
    }
    count++;
    if(flag==1)
    {
        count++;
        ans=1;
    }
    else
    {
        count++;
        ans=0;
    }
    count++;
    return ans;
}
int main()
{
    int count=0;
    int n; cout<<"Enter n :"<<endl; cin>>n;
    int a[n]; cout<<"Enter array :"<<endl;
    for(int i=0;i<n;i++)  cin>>a[i];
    int val; cout<<"Enter value :"<<endl; cin>>val;
    auto start = high_resolution_clock::now();
    int ans=binitr(a,n,count,val);
    auto stop = high_resolution_clock::now();
    if(ans==1)
    cout<<"Element found"<<endl;
    else
    cout<<"Element not found"<<endl;
    cout<<"Number of steps :"<<count<<endl;
    auto duration = duration_cast<microseconds>(stop - start);
    cout<<"Time taken :"<<duration.count()<<endl;
}    