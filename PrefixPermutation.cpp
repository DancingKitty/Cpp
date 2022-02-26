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
        int n,k;
        cin>>n>>k;
        int a[k];
        for(int i=0; i<k; i++) cin>>a[i];
        sort(a, a+k);
        for(int i=a[0]; i>0; i--) cout<<i<<" ";
        for(int i=0; i<(k-1); i++){
            for(int j=a[i+1]; j>a[i]; j--) cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}