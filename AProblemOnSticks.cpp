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
        int n,count=0,c0=0;
        cin>>n;
        int a[n];
        map<int, int> m;
        for(int i=0; i<n; i++){
            cin>>a[i];  
            m[a[i]]++;
            if(a[i]==0) c0++;
        }
        for(auto x:m) count++;
        if(c0==0) cout<<count<<"\n";
        else cout<<count-1<<"\n";
    }
    return 0;
}

