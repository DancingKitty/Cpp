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
        string s;
        cin>>s;
        int count=0;
        int n=s.size();
        if(n<2) cout<<"Bad\n";
        else{
            for(int i=0; i<n-2; i++) if((s[i]=='1' && s[i+1]=='0' && s[i+2]=='1') || (s[i]=='0' && s[i+1]=='1' && s[i+2]=='0')) count++;
            if(count>=1) cout<<"Good\n";
            else cout<<"Bad\n";
        }
    }
    return 0;
}