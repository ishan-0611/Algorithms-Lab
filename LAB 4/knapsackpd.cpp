#include <iostream>
using namespace std;
void knapsack(int wt[],int p[],int n,int capacity)
{
    int profit=0,pos=0,cap=0;
    double ratio[n];
    for(int i=0;i<n;i++)
    {
        ratio[i]=(double)p[i]/wt[i];
    }
    for(int j=0;j<n;j++)
    {
        double max=0.0;
        for(int i=0;i<n;i++)
        {
            if(ratio[i]>max && ratio[i]!=0.0)
            {
                max=ratio[i]; pos=i;
            }
        }
        cap+=wt[pos];
        if(cap<=capacity)
        {
            profit+=p[pos];
            ratio[pos]=0.0;
        }
        else
        break;
    }
    cout<<"Maximum profit :"<<profit<<endl;
}
int main()
{
    int n; cout<<"Enter number of items :"<<endl; cin>>n;
    int wt[n],p[n];
    int capacity; cout<<"Enter capacity :"<<endl; cin>>capacity;
    cout<<"Enter weights of items :"<<endl;
    for(int i=0;i<n;i++) cin>>wt[i];
    cout<<"Enter values of items :"<<endl;
    for(int i=0;i<n;i++) cin>>p[i];
    knapsack(wt,p,n,capacity);
}