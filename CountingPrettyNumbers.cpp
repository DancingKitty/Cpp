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
        int l,r,count=0;
        cin>>l>>r;
        for(int i=l; i<=r; i++) if(i%10==2 || i%10==3 || i%10==9) count++;
        cout<<count<<"\n";
    }
    return 0;
}