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
    
    int t;
    cin>>t;
    for(int i=0; i<t; i++){  
        int w,x,y,z;
        cin>>w>>x>>y>>z;
        if((x-w)==(y*z)) cout<<"filled\n";
        else if((x-w)>(y*z)) cout<<"unfilled\n";
        else cout<<"overflow\n";
    }
    return 0;
}