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
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++){
            if(k>=a[i]){
                k-=a[i];
                cout<<1;
            }
            else cout<<0;
        }
        cout<<"\n";
    }
    return 0;
}