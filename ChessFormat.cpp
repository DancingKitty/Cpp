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
        if(3>(a+b)) cout<<"1\n";
        else if((a+b)<=10 && (a+b)>=3) cout<<"2\n";
        else if((a+b)<=60 && (a+b)>=11) cout<<"3\n";
        else if(a+b>60) cout<<"4\n";
    }
    return 0;
}