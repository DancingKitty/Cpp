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
        int x,y;
        cin>>x>>y;
        if((3*x)<(2*y)) cout<<(3*x)<<"\n";
        else if((3*x)>(2*y)) cout<<(2*y)<<"\n";
        else if((3*x)==(2*y)) cout<<(2*y)<<"\n";
    }
    return 0;
}