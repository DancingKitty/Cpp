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
    
    int a,b,c;
    cin>>a>>b>>c;
    vv;
    vpb(a+b+c);
    vpb(a*b*c);
    vpb((a+b)*c);
    vpb(a*(b+c));
    vpb(a+(b*c));
    vsort;
    cout<<v.back()<<"\n";
    return 0;
}
