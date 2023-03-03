#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
void selection(int a[],int n,int &count)
{
    for(int size=n;size>=0;size--)
    {
        count++;
        count++;
        int j=0,temp;
        for(int k=1;k<size;k++)
        {
            count++;
            count++;
            if(a[j]<a[k])
            {
                count++;
                j=k;
            }
            count++;
            temp=a[j];
            count++;
            a[j]=a[size-1];
            count++;
            a[size-1]=temp;
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
    selection(a,n,count);
    auto stop = high_resolution_clock::now();
    cout<<"Sorted array :"<<endl;
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
    cout<<"Number of steps :"<<count<<endl;
    auto duration = duration_cast<microseconds>(stop - start);
    cout<<"Time taken :"<<duration.count()<<endl;
}