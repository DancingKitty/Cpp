//author : elvenblade
//जय हिंद, जय महाराष्ट्र !

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

signed main(){
    fastio;
    
    int t;
    cin>>t;
    for(int i=0; i<t; i++){ 
        int u,v,a,s;
        cin>>u>>v>>a>>s; 
        int n=(u*u)-2*a*s;
        if((v*v)>=n) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}