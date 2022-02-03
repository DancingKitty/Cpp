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
        int a1,a2,a3,b1,b2,b3;
        cin>>a1>>a2>>a3>>b1>>b2>>b3;
        if((a1+a2+a3)>(b1+b2+b3)) cout<<"DRAGON\n";
        else if((a1+a2+a3)==(b1+b2+b3)){
            if(a1>b1) cout<<"DRAGON\n";
            else if(a1==b1){
                if(a2>b2) cout<<"DRAGON\n";
                else if((a2==b2)&&(a3==b3)) cout<<"TIE\n";
                else cout<<"SLOTH\n";
            }
            else cout<<"SLOTH\n";
        }
        else cout<<"SLOTH\n";
    }

    return 0;
}