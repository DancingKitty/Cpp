#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define vsort sort(v.begin(),v.end())
#define vpb v.push_back
#define asort sort(a,a+n)
 
signed main(){
    fastio;
    
    int count=0;
    string s;
    cin>>s;
    int n=s.size();
    for(int i=0; i<n; i++){
        if(s[i]=='4' || s[i]=='7') count++;
    }
    if(count==4 || count==7) cout<<"YES\n";
    else cout<<"NO\n";
 
    return 0;
}