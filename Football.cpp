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
    
    int count=0;
    string s;
    cin>>s;
    int n=s.size();
    for(int i=0; i<=(n-7); i++){
        if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='1'&& s[i+3]=='1'&& s[i+4]=='1'&& s[i+5]=='1' && s[i+6]=='1') count++;
        else if(s[i]=='0' && s[i+1]=='0' && s[i+2]=='0'&& s[i+3]=='0'&& s[i+4]=='0'&& s[i+5]=='0' && s[i+6]=='0') count++;
    }
    if(count>0) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}