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
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        if((b>=n) && (a+c)>=n) cout<<"YES\n";
        else cout<<"NO\n"; 
    }
    return 0;
}