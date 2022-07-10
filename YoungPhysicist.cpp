//author : elvenblade
//जय हिंद, जय महाराष्ट्र !

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define vsort sort(v.begin(),v.end())
#define vpb v.push_back
#define asort sort(a,a+n)
#define vv vector<int> v
#define rev reverse(a, a+n) 

signed main(){
    fastio;
    
    int t,fx=0,fy=0,fz=0;
    cin>>t;
    for(int i=0; i<t; i++){  
        int x,y,z;
        cin>>x>>y>>z;
        fx+=x;
        fy+=y;
        fz+=z;
    }
    if(fx==0 && fy==0 && fz==0) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}

