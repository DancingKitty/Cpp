//author : elvenblade
//जय हिंद, जय महाराष्ट्र !

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define l(n) ll n;cin >> n;
#define a(n) ll a[n];
#define b(n) ll b[n];
#define l2(a,b) ll a,b;cin >> a >> b;
#define l3(a,b,c) ll a,b,c;cin >> a >> b >> c;
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main(){
    fastio;

    l(t);
    for( ll i=0; i<t; i++){
        l3(x,y,z);
        cout<<(x*(z-y))<<"\n";
    }

    return 0;
}