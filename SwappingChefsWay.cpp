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
        int n;
        string s;
        cin>>n>>s;
        string s1=s;
        sort(s1.begin(),s1.end());
        for(int i=0; i<n; i++) if(s[i]!=s1[i]) swap(s1[i],s1[n-1-i]);
        if(s==s1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}