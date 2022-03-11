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
        if((a==1 && (b==2 || b==3)) || (b==1 && (a==2 || a==3)) || (a==2 && (b==1 || b==4)) || (b==2 && (a==1 || a==4))) cout<<"YES\n";
        else if(a%2!=0){
            if((b==a+2) || (b==a+1) || (b==a-2)) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else if(a%2==0){
            if((b==a+2) || (b==a-1) || (b==a-2)) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else if(b%2!=0){
            if((b==a+2) || (b==a+1) || (b==a-2)) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else if(b%2==0){
            if((b==a+2) || (b==a-1) || (b==a-2)) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else cout<<"NO\n";
    }
    return 0;
}