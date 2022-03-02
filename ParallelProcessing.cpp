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
        int n,c1=0,c2=0,sum=0;
        cin>>n;
        int a[n];
        vector<int> v;
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) sum+=a[i];
        if(n==1) cout<<a[0]<<"\n";
        else{
            for(int i=0; i<n; i++){
                c1+=a[i];
                vpb(max(c1,sum-c1));
            }
            vsort;
            cout<<v[0]<<"\n";
        }
    }
    return 0;
}