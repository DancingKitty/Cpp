//author : elvenblade
//जय हिंद, जय महाराष्ट्र !

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define vsort sort(v.begin(),v.end())
#define vpb v.push_back
#define asort sort(a,a+n)

signed main(){
    fastio;
    
    int t;
    cin>>t;
    for(int i=0; i<t; i++){ 
        int x;
        string s;
        cin>>x>>s;
        int l=0,m=0; 
        for(int i=0; i<14; i++){
            if(s[i]=='C') l++;
            else if(s[i]=='N') m++;
            else if(s[i]=='D'){
                l++;
                m++;
            }
        }
        if(l>m) cout<<60*x<<"\n";
        else if(m>l) cout<<40*x<<"\n";
        else if(m==l) cout<<55*x<<"\n";
    }
    return 0;
}