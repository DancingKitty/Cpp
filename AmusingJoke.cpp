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
    
    string s1,s2,s3,s4;
    cin>>s1>>s2>>s3;
    s4=s1+s2;
    sort(s4.begin(), s4.end());
    sort(s3.begin(), s3.end());
    if(s3==s4) cout<<"YES";
    else cout<<"NO";
    return 0;
}