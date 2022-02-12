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
        int n;
        string s;
        cin>>n>>s;
        int c1=0,c0=0;
        for(int i=0; i<n; i++){
            if(s[i]=='1') c1++;
            else if(s[i]=='0') c0++; 
        }
        if(n%2==0){
            if(c1==c0) cout<<"YES\n";
            else if(((c1%2)==0) && ((c0%2)==0)) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else if((n%2)!=0){
            cout<<"YES\n";
        }
    }
    return 0;
}