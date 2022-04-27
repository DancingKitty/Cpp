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

signed main(){
    fastio;
    
    int t;
    cin>>t;
    for(int i=0; i<t; i++){  
        int a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        if(((a+b)<=d && c<=e) || ((a+c)<=d && b<=e) || ((b+c)<=d && a<=e)) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}