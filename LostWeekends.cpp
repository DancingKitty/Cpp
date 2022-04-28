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

signed main(){
    fastio;
    
    int t;
    cin>>t;
    for(int i=0; i<t; i++){  
        int a1,a2,a3,a4,a5,p,count=0;
        cin>>a1>>a2>>a3>>a4>>a5>>p;
        count+=((p)*(a1+a2+a3+a4+a5));
        if(count>(24*5)) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}