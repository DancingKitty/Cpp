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

    int n,h,x,count=0;
    cin>>n>>h>>x;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        if(a>=(h-x)) count++;
    }
    if(count>0) cout<<"YES\n";
    else cout<<"NO\n";
    
    return 0;
}