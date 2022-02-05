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
        int n;
        cin>>n;
        float a=pow((0.143*n),n);
        if((a-floor(a))<0.5) cout<<floor(a)<<"\n";
        else cout<<floor(a)+1<<"\n";
    }
    return 0;
}