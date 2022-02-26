//author : elvenblade
//जय हिंद, जय महाराष्ट्र !

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define vsort sort(v.begin(),v.end())
#define vpb v.push_back
#define asort sort(a,a+n)

signed main(){
    fastio;
    
    int t;
    cin>>t;
    for(int i=0; i<t; i++){  
        int n,ceven=0,codd=0;
        cin>>n;
        int a[2*n];
        for(int i=0; i<(2*n); i++) cin>>a[i];
        for(int i=0; i<(2*n); i++){
            if(a[i]%2==0) ceven++;
            else codd++;
        }
        if(ceven%2==0 && codd%2==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}