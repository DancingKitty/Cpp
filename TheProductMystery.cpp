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
        int b,c;
        cin>>b>>c;
        if(c%b==0) cout<<c/b<<"\n";
        else if(b%c==0) cout<<b/c<<"\n";
        else if(b>c) cout<<c/gcd(b,c)<<"\n";
        else if(c>b) cout<<c/gcd(b,c)<<"\n";
    }
    return 0;
}