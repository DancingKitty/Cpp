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
        int x;
        cin>>x;
        if(x%4==0) cout<<"North\n";
        else if(x%4==1) cout<<"East\n";
        else if(x%2==0) cout<<"South\n";
        else cout<<"West\n";
    }
    return 0;
}