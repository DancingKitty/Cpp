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
        vector<int> v;
        int a,b;
        cin>>a>>b;
        vpb(a+b);
        int c,d;
        cin>>c>>d;
        vpb(c+d);
        int e,f;
        cin>>e>>f;
        vpb(e+f);
        vsort;
        cout<<v.back()<<"\n";
    }
    return 0;
}