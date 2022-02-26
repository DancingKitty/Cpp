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
        int n;
        cin>>n;
        int a[n];
        vector<int> v;
        for(int i=0; i<n; i++) cin>>a[i];
        asort;
        for(int i=1; i<n; i++){
            vpb(a[i]-a[i-1]);
        }
        vsort;
        cout<<v[0]<<"\n";
    }
    return 0;
}