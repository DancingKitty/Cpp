//author : elvenblade
//जय हिंद, जय महाराष्ट्र !

#include<bits/stdc++.h>
using namespace std;
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;

int main(){
    fastio;
    ll t;
    cin>>t;
    for(ll i=0; i<t; i++){
    ll m;
    cin>>m;
    ll a[m],b[m];
    vector<ll> v;
    for(ll i=0; i<m; i++) cin>>a[i];
    for(ll i=0; i<m; i++) b[i]=a[i];
    sort(a,a+m);
    ll k=a[m-1];
    for(ll i=1; i<=k; i++){
        ll count=0;
        for(ll j=0; j<m; j++){
            if((a[j])%i==0) count++;
        }
        if(count==m) v.push_back(i);
    }
    int n=v.size();
    sort(v.begin(),v.end());
    int d=v[n-1];
    if(d>1) for(ll i=0; i<m; i++) cout<<(b[i]/d)<<" ";
    else for(ll i=0; i<m; i++) cout<<b[i]<<" ";
    cout<<"\n";
    }
    return 0;
}