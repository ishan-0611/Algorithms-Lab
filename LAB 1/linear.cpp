#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
bool lsearch(int a[],int n,int value,int &count)
{
    bool flag=false;
    count++;
    for(int i=0;i<n;i++)
    {
        count++;
        count++;
        if(a[i]==value)
        {
            flag=true;
            break;
        }
    }
    count++;
    count++;
    return flag;
}
int main()
{
    int count=0;
    int n; cout<<"Enter n :"<<endl; cin>>n;
    int a[n]; cout<<"Enter array :"<<endl;
    for(int i=0;i<n;i++) cin>>a[i];
    int val; cout<<"Enter value :"<<endl; cin>>val;
    auto start = high_resolution_clock::now();
    bool ans=lsearch(a,n,val,count);
    auto stop = high_resolution_clock::now();
    cout<<ans<<endl;
    cout<<"Number of steps :"<<count<<endl;
    auto duration = duration_cast<microseconds>(stop - start);
    cout<<"Time taken :"<<duration.count()<<endl;
}