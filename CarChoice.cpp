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
        float x1,y1,x2,y2;
        cin>>x1>>x2>>y1>>y2;
        if((y1/x1)>(y2/x2)) cout<<1<<"\n";
        else if((y1/x1)<(y2/x2)) cout<<-1<<"\n";
        else if((y1/x1)==(y2/x2)) cout<<0<<"\n";
    }
    return 0;
}