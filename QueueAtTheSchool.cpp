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

    int n,t;
    string s;
    cin>>n>>t>>s;
    while(t--) for(int i=0; i<n-1; i++) if(s[i]=='B' && s[i+1]=='G') {swap(s[i],s[i+1]);i++;}
    cout<<s<<"\n";

    return 0;
}