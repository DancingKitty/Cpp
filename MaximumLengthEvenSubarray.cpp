//author : elvenblade
//जय हिंद, जय महाराष्ट्र !

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define vsort sort(v.begin(),v.end())
#define asort sort(a,a+n)

signed main(){
    fastio;
    
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        int sum=n*(n+1)/2;
        if(sum%2==0) cout<<n<<"\n";
        else cout<<n-1<<"\n";
    }
    return 0;
}