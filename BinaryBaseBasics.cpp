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
        string s;
        vector<int> v;
        cin>>n>>k>>s;
        int count=0;
        int count2=0;
        
        if((n==1)&&(k==1)) cout<<"YES\n";
        else{
        for(int i=0; i<n; i++){
            if(s[i]!=s[n-1-i]) count++;
        }
        int d=count/2;
        v.push_back(d);
        while(d<=n){
            d+=2;
            v.push_back(d);
        }
        int l=v.size();
        for(int i=0; i<l; i++){
            if(k==v[i]){
                count2++;
            }
        }
        if(count2>0) cout<<"YES\n";
        else cout<<"NO\n";
        }
    }
    return 0;
}