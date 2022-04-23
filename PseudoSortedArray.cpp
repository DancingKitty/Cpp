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
        cin>>n;
        int a[n],b[n];
        vv;
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) b[i]=a[i];
        asort;
        for(int i=0; i<n; i++) if(a[i]!=b[i]) vpb(i);
        int m=v.size();
        if(m==2 && ((v[1]-v[0])==1)) cout<<"YES\n";
        else if(m==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}