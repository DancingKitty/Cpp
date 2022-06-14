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
    
    int count=0;
    string s;
    getline(cin,s);
    int m=s.length();
    for(int i=0; i<m; i++) if(s[i]=='H' || s[i]=='Q' || s[i]=='9') count++;
    if(count>0) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}


