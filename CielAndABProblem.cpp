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
    
    int a,b;
    cin>>a>>b;
    if((a-b)%10!=0 && (a-b)!=1) cout<<(a-b-1);
    else cout<<a-b+1;

    return 0;
}
