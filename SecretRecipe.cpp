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
        float x1,x2,x3,v1,v2;
        cin>>x1>>x2>>x3>>v1>>v2;
        if((x3-x1)/v1 > (x2-x3)/v2) cout<<"Kefa\n";
        else if((x3-x1)/v1 < (x2-x3)/v2) cout<<"Chef\n";
        else if((x3-x1)/v1 == (x2-x3)/v2) cout<<"Draw\n";
    }
    return 0;
}