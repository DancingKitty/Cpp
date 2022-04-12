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
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.size();
    for(int i=0; i<n; i++) if(s1[i]==s2[n-1-i]) count++;
    if(count==n) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}