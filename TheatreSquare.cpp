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
    
    int n,m,a,cn=0,cm=0;
    cin>>n>>m>>a;
    if(n%a==0) cn+=(n/a);
    else cn+=((n/a)+1);

    if(m%a==0) cm+=(m/a);
    else cm+=((m/a)+1);

    cout<<(cm*cn)<<"\n";
    return 0;
}
