//author : elvenblade
//जय हिंद, जय महाराष्ट्र !

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define lt ll t;cin >> t;
#define ln ll n;cin >> n;
#define a(n) ll a[n];
#define b(n) ll b[n];
#define lab ll a,b;cin >> a >> b;
#define labc ll a,b,c;cin >> a >> b >> c;
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main(){
    fastio;
    
    lt;
    for( ll i=0; i<t; i++){
        labc;
        ll count=0;
        int ar[a],br[a];
        for(int i=0; i<a; i++) cin>>ar[i];
        for(int i=0; i<a; i++) cin>>br[i];
        for(int i=0; i<a; i++) if(((ar[i]-br[i])==b)||((ar[i]-br[i])==c)||((br[i]-ar[i])==b)||((br[i]-ar[i])==c)) count++;
        if(count==a) cout<<"Yes\n";
        else cout<<"No\n";
    }

    return 0;
}