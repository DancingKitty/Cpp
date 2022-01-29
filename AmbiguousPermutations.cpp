#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while(true){
        ll n,count=0;
        cin>>n;
        ll a[n],b[n+1];
        vector<ll> v;
        v.push_back(0);
        if(n==0) break;
        for(ll i=0; i<n; i++) cin>>a[i];
        for(ll i=0; i<n; i++) v.push_back(a[i]);
        for(ll i=0; i<(n+1); i++)  b[v[i]]=i;
        for(ll i=0; i<(n+1); i++) if(b[i]==v[i]) count++;
        if(count==(n+1)) cout<<"ambiguous\n";
        else cout<<"not ambiguous\n";
    }

    return 0;
}