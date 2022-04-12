//author : elvenblade
//जय हिंद, जय महाराष्ट्र !

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define vsort sort(v.begin(),v.end())
#define vpb v.push_back
#define asort sort(a,a+n)
#define vv vector<int> v

signed main(){
    fastio;
    
    int a[4],count=0;
    for(int i=0; i<4; i++) cin>>a[i];
    sort(a, a+4);
    if(a[0]==a[1] && a[1]==a[2] && a[2]==a[3]) cout<<3<<"\n";
    else if(a[0]!=a[1] && a[1]!=a[2] && a[2]!=a[3]) cout<<0<<"\n";
    else if(a[0]==a[1] && a[1]!=a[2] && a[2]!=a[3]) cout<<1<<"\n";
    else if(a[0]!=a[1] && a[1]==a[2] && a[2]!=a[3]) cout<<1<<"\n";
    else if(a[0]!=a[1] && a[1]!=a[2] && a[2]==a[3]) cout<<1<<"\n";
    else if(a[0]==a[1] && a[1]==a[2] && a[2]!=a[3]) cout<<2<<"\n";
    else if(a[0]!=a[1] && a[1]==a[2] && a[2]==a[3]) cout<<2<<"\n";
    else if(a[0]==a[1] && a[1]!=a[2] && a[2]==a[3]) cout<<2<<"\n";

    return 0;
}