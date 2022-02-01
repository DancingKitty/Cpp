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
        float r;
        cin>>r;
        float a1,a2,b1,b2,c1,c2;
        cin>>a1>>a2>>b1>>b2>>c1>>c2;
        float l1,l2,l3;
        l1=sqrt(((b1-a1)*(b1-a1))+((b2-a2)*(b2-a2)));
        l2=sqrt(((c1-a1)*(c1-a1))+((c2-a2)*(c2-a2)));
        l3=sqrt(((b1-c1)*(b1-c1))+((b2-c2)*(b2-c2)));
        if((l1<=r)&&(l2<=r)&&(l3<=r)) cout<<"yes\n";
        else if(((l1>r)&&(l2<=r)&&(l3<=r))||((l1<=r)&&(l2>r)&&(l3<=r))||((l1<=r)&&(l2<=r)&&(l3>r))) cout<<"yes\n";
        else cout<<"no\n";
    }

    return 0;
}