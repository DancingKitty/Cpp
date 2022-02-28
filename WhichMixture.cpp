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
        int a,b;
        cin>>a>>b;
        if(a>0 && b>0) cout<<"Solution\n";
        else if(b==0) cout<<"Solid\n";
        else if(a==0) cout<<"Liquid\n";
    }
    return 0;
}