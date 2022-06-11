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
    
    string s;
    getline(cin, s);
    map<char, int> m;
    int n=s.length();
    for(int i=0; i<n; i++) m[s[i]]++;
    if(m.size()<3) cout<<0<<"\n";
    else if(m.size()==3) cout<<1<<"\n";
    else cout<<m.size()-4<<"\n";
    
    return 0;
}
