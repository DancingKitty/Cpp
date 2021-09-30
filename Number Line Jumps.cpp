#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if((a==c)&&(b==d))
    cout<<"YES";
    else if((a>c)&&(d>b))
    cout<<"YES";
    else if((c>a)&&(b>d))
    cout<<"YES";
    else if((a==c)&&(b!=d))
    cout<<"NO";
    else if((a!=c)&&(b==d))
    cout<<"NO";
    else if((a>c)&&(b>d))
    cout<<"NO";
    else if((c>a)&&(d>b))
    cout<<"NO";
    else 
    cout<<"NO";
}
