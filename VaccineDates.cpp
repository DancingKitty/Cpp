//author : elvenblade
//जय हिंद, जय महाराष्ट्र !

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

signed main(){
    fastio;
    
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int d,l,r;
        cin>>d>>l>>r;
        if((d>=l)&&(d<=r)) cout<<"Take second dose now\n";
        else if(d<l) cout<<"Too Early\n";
        else if(d>r) cout<<"Too Late\n";
    }
    return 0;
}