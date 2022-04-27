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
        int a[n];
        vv;
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++){
            int count=0;
            for(int j=0; j<n; j++) if(a[i]==a[j]) count++;
            vpb(count);
        }
        vsort;
        cout<<(n-v.back())<<"\n";
    }
    return 0;
}