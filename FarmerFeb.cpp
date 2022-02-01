//author : elvenblade
//जय हिंद, जय महाराष्ट्र !

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vl vector<ll>
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
        lab;
        ll c=1;
        ll count=0;
        while(true){
        for(ll i=1; i<=(a+b+c); i++) if(((a+b+c)%i)==0) count++;
        if(count==2){
            cout<<c<<"\n";
            break;
        }
        else{
            c++;
            count=0;
        };
        }
    }

    return 0;
}