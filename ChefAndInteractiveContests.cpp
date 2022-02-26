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
 
        int n,r;
        cin>>n>>r;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            if(a>=r) cout<<"Good boi\n";
            else cout<<"Bad boi\n";
        }
        
    return 0;
}