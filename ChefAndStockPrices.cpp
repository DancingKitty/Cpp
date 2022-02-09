//author : elvenblade
//जय हिंद, जय महाराष्ट्र !

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define vsort sort(v.begin(),v.end())
#define asort sort(a,a+n)

signed main(){
    fastio;
    
    int t;
    cin>>t;
    for(int i=0; i<t; i++){  
        float s,a,b,c;
        cin>>s>>a>>b>>c;
        float m=s*(1+(0.01*c));
        if((m>=a) && (m<=b))  cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}