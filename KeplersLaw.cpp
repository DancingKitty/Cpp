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
        float t1,t2,r1,r2;
        cin>>t1>>t2>>r1>>r2;
        float m=(t1*t1)/(t2*t2);
        float n=(r1*r1)*r1;
        float l=(r2*r2)*r2;
        float x=n/l;
        if(m==x) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}