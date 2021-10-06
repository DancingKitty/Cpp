#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,min,max,cmin=0,cmax=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    cin>>a[i];
    min=a[0];
    max=a[0];
    for(int i=0; i<n; i++)
    {
        if(a[i]>=min && a[i]<=max)
        {
            cmin+=0;
            cmax+=0;
        }
        else if(a[i]>max)
        {
            max=a[i];
            cmax++;
        }
        else if(a[i]<min)
        {
            min=a[i];
            cmin++;
        }
    }
    cout<<cmax<<" "<<cmin;
}
