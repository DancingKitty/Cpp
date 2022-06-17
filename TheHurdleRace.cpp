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
    
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    asort;
    if(k>=a[n-1]) cout<<"0\n";
    else cout<<abs(k-a[n-1]);
    return 0;
}
