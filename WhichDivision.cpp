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
        int r;
        cin>>r;
        if(r>=2000) cout<<"1\n";
        else if(r<2000 && r>=1600) cout<<"2\n";
        else if(r<1600) cout<<"3\n";
    }
    return 0;
}