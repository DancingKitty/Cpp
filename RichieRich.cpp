//author : elvenblade
//जय हिंद, जय महाराष्ट्र !

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

signed main(){
    fastio;
    
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int a,b,x,count=0;
        cin>>a>>b>>x;
        while(a<=b){
            a+=x;
            count++;
        }
        cout<<(count-1)<<"\n";
    }
    return 0;
}