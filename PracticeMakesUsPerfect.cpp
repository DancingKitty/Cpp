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
#define m map<int,int> m  

signed main(){
    fastio;

    int a[4];
    int count=0;
    for(int i=0; i<4; i++){
        cin>>a[i];
        if(a[i]>=10) count++;
    }    
    cout<<count<<"\n";

    return 0;
}
    
