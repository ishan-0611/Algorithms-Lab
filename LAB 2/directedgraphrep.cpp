#include<bits/stdc++.h>
using namespace std;

int cnt=0;

int main()
{
    int adjmat[10][10],n,e;
    cnt=0;
    cout<<"nodes";
    cin>>n;
    cout<<"edges";
    cin>>e;

    for (int i=0;i<n;i++)
    for (int j=0;j<n;j++)
    adjmat[i][j]=0;

    int s,d;
    for (int i=0;i<e;i++)
    {
        cout<<"source";
        cin>>s;
        cout<<"destination";
        cin>>d;
        adjmat[s][d]=1;
    }

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout<<adjmat[i][j]<<" ";
            /*if (adjmat[i][j] == 1)
            {
                cout<<i<<" -> "<<j<<endl;
            }*/
        }
        cout<<endl;
    }
    int tadjmat[10][10];
    for (int i=0;i<n;i++)
    for (int j=0;j<n;j++)
    tadjmat[i][j]=0;

    for (int i=0;i<n;i++)
    for (int j=0;j<n;j++)
        if (adjmat[i][j]==1)
        tadjmat[j][i]=1;

    cout<<"transpose of the adjmatrix"<<endl;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout<<tadjmat[i][j]<<" ";
            /*if (adjmat[i][j] == 1)
            {
                cout<<i<<" -> "<<j<<endl;
            }*/
        }
        cout<<endl;
    }
}
