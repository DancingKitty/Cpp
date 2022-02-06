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
        int x;
        cin>>x;
        if(1<=x && x<100) cout<<"Easy\n"; 
        else if(100<=x && x<200) cout<<"Medium\n";
        else if(200<=x && x<=300) cout<<"Hard\n";
    }
    return 0;
}