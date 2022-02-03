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
        string s;
        cin>>s;
        int c1=0,c0=0;
        int n=s.size();
        for(int i=0; i<n; i++){
            if(s[i]=='1') c1++;
            else c0++;
        }
        if(c1==(n-1)|| c0==(n-1)) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}