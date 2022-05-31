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
    
    map<int,int> m;
    int a[10]={1,2,2,2,4,4,7,8,8,9};
    for(int i=0; i<10; i++){
        m[a[i]]++;
    }
    for(auto x=m.cbegin(); x!=m.cend(); x++){
        cout<<(*x).first<<" "<<(*x).second<<"\n";
    }

    return 0;
}
