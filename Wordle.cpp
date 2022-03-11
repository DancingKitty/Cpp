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
        string s,t1;
        cin>>s>>t1;
        for(int i=0; i<5; i++){
            if(s[i]==t1[i]) cout<<"G";
            else cout<<"B";
        }
        cout<<"\n";
    }
    return 0;
}