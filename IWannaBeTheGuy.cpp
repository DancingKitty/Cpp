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
    
    int n,p,q,count=0;
    map<int, int> m;
    cin>>n>>p;
    for(int i=0; i<p; i++){
        int a;
        cin>>a;
        m[a]++;
    }
    cin>>q;
    for(int i=0; i<q; i++){
        int a;
        cin>>a;
        m[a]++;
    }
    for(auto x=m.cbegin(); x!=m.cend(); x++) if((*x).second>0) count++;
    if(count==n) cout<<"I become the guy.\n";
    else cout<<"Oh, my keyboard!\n"; 
}
     