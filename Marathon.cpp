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
        int d,d1,a,b,c;
        cin>>d>>d1>>a>>b>>c;
        if((d*d1)<10) cout<<0<<"\n";
        else if((d*d1)>=10 && (d*d1)<21) cout<<a<<"\n";
        else if((d*d1)>=21 && (d*d1)<42) cout<<b<<"\n";
        else cout<<c<<"\n";
    }
    return 0;
}