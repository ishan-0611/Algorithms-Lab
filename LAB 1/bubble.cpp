#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
void bubble(int a[],int n,int &count)
{
    for(int i=0;i<n-1;i++)
    {
        count++;
        for(int j=i+1;j<n;j++)
        {
            count++;
            count++;
            if(a[i]>a[j])
            {
                count++;
                swap(a[i],a[j]);
            }
        }
        count++;
    }
    count++;
}
int main()
{
    int count=0;
    int n; cout<<"Enter n :"<<endl; cin>>n;
    int a[n]; cout<<"Enter array :"<<endl;
    for(int i=0;i<n;i++)  cin>>a[i];
    auto start = high_resolution_clock::now();
    bubble(a,n,count);
    auto stop = high_resolution_clock::now();
    cout<<"Sorted array :"<<endl;
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
    cout<<"Number of steps :"<<count<<endl;
    auto duration = duration_cast<microseconds>(stop - start);
    cout<<"Time taken :"<<duration.count()<<endl;
}
