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
        int n,k,max=0;
        cin>>n>>k;
        for(int i=0; i<n; i++){
            int a,b,c;
            cin>>a>>b>>c;
            if((a*b)>=max && c<=k) max=(a*b);
        }
        if(max==0) cout<<"no tablet\n";
        else cout<<max<<"\n";
    }
    return 0;
}