#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
void insertionsort(int a[],int n,int &count)
{
    int i,key,j;
    count++;
    for(i=1;i<n;i++)
    {
        count++;
        count++;
        key=a[i];
        count++;
        j=i-1;
        while(j>=0 && a[j]>key)
        {
            count++;
            count++;
            a[j+1]=a[j];
            count++;
            j=j-1;
        }
        count++;
        count++;
        a[j+1]=key;
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
    insertionsort(a,n,count);
    auto stop = high_resolution_clock::now();
    cout<<"Sorted array :"<<endl;
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
    cout<<"Number of steps :"<<count<<endl;
    auto duration = duration_cast<microseconds>(stop - start);
    cout<<"Time taken :"<<duration.count()<<endl;
}