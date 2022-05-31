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
#define map map<int,int> m  

signed main(){
    fastio;
    
    int k,l,m,n,d,count=0;
    cin>>k>>l>>m>>n>>d;
    for(int i=1; i<=d; i++){
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0) count++;
    }
    cout<<count<<"\n";

    return 0;
}
