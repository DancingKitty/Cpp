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
        int x,y,z;
        cin>>x>>y>>z;
        if((z%x)==0 && (z%y)==0) cout<<"ANY\n";
        else if((z%x)==0 && (z%y)!=0) cout<<"CHICKEN\n";
        else if((z%x)!=0 && (z%y)==0) cout<<"DUCK\n";
        else cout<<"NONE\n";
    }
    return 0;
}