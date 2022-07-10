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
    cin>>s;
    for(int i=0; i<s.length(); i++) if(isupper(s[i])) count++;
    if(count==(s.length()-1) && !isupper(s[0])){
        for(int i=0; i<s.length(); i++) s[i]=tolower(s[i]);
        s[0]=toupper(s[0]);
        cout<<s;
    }
    else if((count==s.length())){
        for(int i=0; i<s.length(); i++) s[i]=tolower(s[i]);
        cout<<s;
    }
    else cout<<s;
    return 0;
}
