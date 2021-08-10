#include<bits/stdc++.h>
using namespace std;
int main()
{
    long s,t,a,b,m,n;
    long apple=0;
    long orange=0;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    
    long p[m];
    long q[n];
    
    for(int i=0; i<m; i++)
    {
        cin>>p[i];
    }
    
    for(int j=0; j<n; j++)
    {
        cin>>q[j];
    }
    
    for(int i=0; i<m; i++)
    {
        if(p[i]>=(s-a) && (t-a)>=p[i])
        {
            apple=apple+1;
        }
    }
    
    for(int j=0; j<n; j++)
    {
        if((b-s)>=q[j] && q[j]>=(b-t))
        {
            orange = orange+1;
        }
    }
    
    cout<<apple<<"\n"<<orange<<"";

}
