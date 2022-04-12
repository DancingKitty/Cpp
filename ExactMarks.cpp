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
        int n,x,a=0,b=0;
        cin>>n>>x;
        if(x==0){
            a=0;
            b=0;
        }
        else if(x%3==0 && x<=(3*n)){
            a=(x/3);
        }
        else if(x%3==1){
            a+=(x/3)+1;
            b+=2;
        }
        else if(x%3==2){
            a+=(x/3)+1;
            b++;
        }

        if((a+b)<=n) cout<<"YES\n"<<a<<" "<<b<<" "<<n-(a+b)<<"\n";
        else cout<<"NO\n";
    }
    return 0;
}