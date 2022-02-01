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
        ll count=0,n=0,pc1=0,pc2=0;
        string s1,s2;
        cin>>s1>>s2;
        n=s1.size();
        for(ll i=0; i<n; i++) if(((s1[i]=='?')&&(s2[i]!='?'))||((s1[i]!='?')&&(s2[i]=='?'))) pc1++;
        for(ll i=0; i<n; i++) if((s1[i]==s2[i])&&(s1[i]=='?')) pc2++;
        for(ll i=0; i<n; i++) if((s1[i]==s2[i])&&(s1[i]!='?')) count++;
        ll a1=n-count-pc1-pc2;
        if(a1==0) cout<<"Yes\n";
        else cout<<"No\n";
    }

    return 0;
}