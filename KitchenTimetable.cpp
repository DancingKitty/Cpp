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
#define rev reverse(a, a+n) 

signed main(){
    fastio;
    
    int t;
    cin>>t;
    for(int i=0; i<t; i++){  
        int n,count=0;
        vv;
        cin>>n;
        int a[n],b[n];
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) cin>>b[i];
        vpb(a[0]);
        for(int i=0; i<n-1; i++) vpb(a[i+1]-a[i]);
        for(int i=0; i<n; i++) if(v[i]>=b[i]) count++;
        cout<<count<<"\n";
    }
    return 0;
}