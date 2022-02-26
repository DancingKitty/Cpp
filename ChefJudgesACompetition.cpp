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
        int n,t1=0,t2=0;
        cin>>n;
        int a[n],b[n];
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) cin>>b[i];
        asort;
        sort(b,b+n);
        for(int i=0; i<n-1; i++) t1+=a[i];
        for(int i=0; i<n-1; i++) t2+=b[i];
        if(t1>t2) cout<<"Bob\n";
        else if(t2>t1) cout<<"Alice\n";
        else if(t1==t2) cout<<"Draw\n";
    }
    return 0;
}