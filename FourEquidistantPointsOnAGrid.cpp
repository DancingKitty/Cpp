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
     
        int n;
        cin>>n;
        if(n%2!=0) cout<<"-1\n";
        else if(n%2==0) cout<<0<<" "<<0<<"\n"<<n<<" "<<0<<"\n"<<n/2<<" "<<-n/2<<"\n"<<n/2<<" "<<n/2<<"\n";
        
    return 0;
}