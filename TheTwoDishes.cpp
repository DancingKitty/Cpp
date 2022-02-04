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
        int n,s;
        cin>>n>>s;
        if(n>=s) cout<<s<<"\n";
        else cout<<(2*n)-s<<"\n";
    }
    return 0;
}