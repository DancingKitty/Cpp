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
        int count=0;
        for(int i=0; i<5; i++){
            int a;
            cin>>a;
            if(a==1) count++;
        }
        if(count==0) cout<<"Beginner\n";
        else if(count==1) cout<<"Junior Developer\n";
        else if(count==2) cout<<"Middle Developer\n";
        else if(count==3) cout<<"Senior Developer\n";
        else if(count==4) cout<<"Hacker\n";
        else if(count==5) cout<<"Jeff Dean\n";
    }
    return 0;
}