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
    
    int t;
    cin>>t;
    for(int i=0; i<t; i++){  
        int n,m;
        cin>>n>>m;
        if(n==m) cout<<m<<"\n";
        else if(n>m) cout<<(2*n)-m<<"\n";
        else if(n<m) cout<<n<<"\n";
    }
    return 0;
}