#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m][3];
    for(int i=0; i<n; i++)
    a[i]=0;
    for(int i=0; i<m; i++)
    {
        int j;
        for(j=0; j<3; j++)
        cin>>b[i][j];
    }
    for(int i=0; i<m; i++)
    {
        for(int k=b[i][0]; k<=b[i][1]; k++)
        a[k]+=b[i][2];
    }
    sort(a,a+n);
    cout<<a[n-1];
}
