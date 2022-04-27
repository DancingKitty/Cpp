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
        int n,c1=0,c2=0;
        string s;
        cin>>n>>s;
        for(int i=0; i<n; i++) if(s[i]=='1') c1++;
        for(int i=0; i<(n-1); i++) if(s[i]=='1' && s[i+1]=='1') c2++;
        if(c1>0 && c2==0) cout<<1<<"\n";
        else if(c1==0) cout<<0<<"\n";
        else if(c1==c2) cout<<c1<<"\n";
        else cout<<2<<"\n";
    } 
    return 0;
}