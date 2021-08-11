#include<bits/stdc++.h>
using namespace std;
int main()
{
    long a[5];
    long l,m,n,o,p;
    
    for(int i=0; i<5; i++)
    {
        cin>>a[i];
    }
    
    l=a[0]+a[1]+a[2]+a[3];
    m=a[0]+a[1]+a[2]+a[4];
    n=a[1]+a[2]+a[3]+a[4];
    o=a[0]+a[1]+a[3]+a[4];
    p=a[0]+a[2]+a[3]+a[4];
    
    long b[5]={l,m,n,o,p};
    
    sort(b,b+5);
    
    cout<<b[0]<<" "<<b[4];
}
