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
    
    int n;
    cin>>n;
    int a[n],b[n+1];
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) b[a[i]]=i+1;
    for(int i=1; i<n+1; i++) cout<<b[i]<<" ";

    return 0;
}