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
    
    int n,m,k,count=0;
    cin>>n>>m>>k;
    for(int i=0; i<n; i++){
        int a[k+1];
        int sum=0;
        for(int i=0; i<k+1; i++) cin>>a[i];
        for(int i=0; i<k; i++) sum+=a[i];
        if(a[k]<=10 && sum>=m) count++;
    }
    cout<<count<<"\n";

    return 0;
}