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
    
    int n,count=0,k=13;
    cin>>n;
    int a[14]={4,44,444,7,77,777,47,74,447,744,477,774,474,747};
    while(k>=0){
        if(n%a[k]==0 && (n/a[k])!=0) count++;
        k--;
    }
    if(count>0) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}