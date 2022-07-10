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
        int n;
        cin>>n;
        map<int,int> m;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            m[a]++;
        }
        for(auto x:m){
            if((x.second%2)!=0) cout<<x.first<<"\n";
        }
    }
    return 0;
}

