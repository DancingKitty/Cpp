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
        float n,v1,v2;
        cin>>n>>v1>>v2;
        float k = (n/v2);
        float m = ((n*(sqrt(2)))/v1);
        if((2*k)>=m) cout<<"Stairs\n";
        else cout<<"Elevator\n";
    }
    return 0;
}