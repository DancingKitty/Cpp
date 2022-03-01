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
        int a[10];
        int c1=0,c2=0;
        for(int i=0; i<10; i++) cin>>a[i];  
        for(int i=0; i<10; i+=2) if(a[i]==1) c1++;
        for(int i=1; i<10; i+=2) if(a[i]==1) c2++;
        if(c1>c2) cout<<"1\n";
        else if(c2>c1) cout<<"2\n";
        else if(c1==c2) cout<<"0\n";
    }
    return 0;
}