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
    
    char a,b;
    cin>>a>>b;
    if(a==b) cout<<a;
    else if(a=='R' || b=='R') cout<<'R';
    else if((a=='B' && b=='G')||(a=='G' && b=='B')) cout<<'B'; 

    return 0;
}