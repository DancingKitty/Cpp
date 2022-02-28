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
        float a,b;
        cin>>a>>b;
        float m=a/(b*b);
        if(m<=18) cout<<"1\n";
        else if((m)<=24 && (m)>=19) cout<<"2\n";
        else if((m)<=29 && (m)>=25) cout<<"3\n";
        else if(m>=30) cout<<"4\n";
    }
    return 0;
}