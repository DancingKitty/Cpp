//author : elvenblade
//जय हिंद, जय महाराष्ट्र !

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define sortv sort(v.begin(),v.end())

signed main(){
    fastio;
    
    int t;
    cin>>t;
    for(int i=0; i<t; i++){  
        int n,x;
        vector<pair<int,int>> v;
        cin>>n>>x;
        for(int i=0; i<n; i++){
            int s,r;
            cin>>s>>r;
            v.push_back(make_pair(r,s));
        }
        int m=v.size();
        sortv;
        for(int i=(m-1); i>=0; i--){
            if(v[i].second<=x){
                cout<<v[i].first<<"\n";
                break;
            } 
        }
    }
    return 0;
}