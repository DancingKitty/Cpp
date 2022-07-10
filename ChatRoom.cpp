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
    cin>>s;
    string k="hello";
    int j=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]==k[j]){
            j++;
            if(j==5) break;
        }
    }
    if(j==5) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
