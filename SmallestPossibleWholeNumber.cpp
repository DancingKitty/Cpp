//author : elvenblade
//जय हिंद, जय महाराष्ट्र !

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

signed main(){
    fastio;
    
    int t;
    cin>>t;
    for(int i=0; i<t; i++){  
        int n,k;
        cin>>n>>k;
        if(k==0) cout<<n<<"\n";
        else{
        cout<<n%k<<"\n";
        }
    }
    return 0;
}