//author : elvenblade
//जय हिंद, जय महाराष्ट्र !

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define vsort sort(v.begin(),v.end())
#define vpb v.push_back
#define asort sort(a,a+n)

signed main(){
    fastio;
    
    int t;
    cin>>t;
    for(int i=0; i<t; i++){  
        int a;
        cin>>a;
        cout<<a/5+a/25+a/125+a/625+a/(625*5)+a/(625*25)+a/(625*125)+a/(625*625)+a/(625*625*5)+a/(1953125*5)+a/(1953125*25)+a/(1953125*125)+a/(244140625*5)<<"\n";
    }
    return 0;
}