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
        int n,x,p;
        cin>>n>>x>>p;
        int k=(x*3)+((n-x)*(-1));
        if(k>=p) cout<<"PASS\n";
        else cout<<"FAIL\n";
    }
    return 0;
}