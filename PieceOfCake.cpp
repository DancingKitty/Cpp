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
        vv;
        string s;
        cin>>s;
        int n=s.size();
        if(n%2!=0) cout<<"NO\n";
        else{
        for(int i=0; i<n; i++){
            int count=0;
            for(int j=i; j<n; j++){
                if(s[j]==s[i]) count++;
            }
            vpb(count);
        }
        int m=v.size();
        vsort;
        if(v[m-1]==n/2) cout<<"YES\n";
        else cout<<"NO\n";
        }
    }
    return 0;
}