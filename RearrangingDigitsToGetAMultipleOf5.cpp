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
        int n,count=0;
        string s;
        cin>>n>>s;
        for(int i=0; i<n; i++) if(s[i]=='0' || s[i]=='5') count++;
        if(count>0) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}