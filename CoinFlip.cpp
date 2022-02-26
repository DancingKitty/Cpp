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
        int g;
        cin>>g;
        for(int i=0; i<g; i++){
            int k,n,q;
            cin>>k>>n>>q;
            if(n%2!=0){
                if(k==1 && q==1) cout<<n/2<<"\n";
                else if(k==1 && q==2) cout<<(n/2)+1<<"\n";
                else if(k==2 && q==1) cout<<(n/2)+1<<"\n";
                else if(k==2 && q==2) cout<<n/2<<"\n";
            }
            else if(n%2==0){
                cout<<n/2<<"\n";
            }
        }
    }
    return 0;
}