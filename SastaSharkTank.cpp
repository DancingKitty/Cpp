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
        if((x*10)>(y*5)) cout<<"FIRST\n";
        else if((x*10)<(y*5)) cout<<"SECOND\n";
        else cout<<"ANY\n";
    }
    return 0;
}