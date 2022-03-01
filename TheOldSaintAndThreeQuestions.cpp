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
        int c1=0,c2=0;
        for(int i=0; i<3; i++){
            int a;
            cin>>a;
            if(a==1) c1++;
        }
        for(int i=0; i<3; i++){
            int a;
            cin>>a;
            if(a==1) c2++;
        }
        if(c1==c2) cout<<"Pass\n";
        else cout<<"Fail\n";
    }
    return 0;
}