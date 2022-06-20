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
    
    int t;
    cin>>t;
    for(int i=0; i<t; i++){  
        int n,ceven=0,codd=0;
        cin>>n;
        int a[2*n];
        for(int i=0; i<(2*n); i++){
            cin>>a[i];
            if(a[i]%2==0) ceven++;
            else if(a[i]%2!=0) codd++;
        }
        if(ceven==codd) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}
