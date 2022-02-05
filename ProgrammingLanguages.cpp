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
        int a,b,a1,b1,a2,b2;
        cin>>a>>b>>a1>>b1>>a2>>b2;
        if((a1==a && b1==b)||(a1==b && b1==a)) cout<<"1\n";
        else if((a2==a && b2==b)||(a2==b && b2==a)) cout<<"2\n";
        else cout<<"0\n"; 
    }
    return 0;
}