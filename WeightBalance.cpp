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
        int w1,w2,x1,x2,m;
        cin>>w1>>w2>>x1>>x2>>m;
        if(((w2-w1)<=(x2*m))&& ((w2-w1)>=(x1*m))) cout<<"1\n";
        else cout<<"0\n";
    }
    return 0;
}