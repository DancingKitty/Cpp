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
#define rev reverse(a, a+n) 

signed main(){
    fastio;
    
    int n;
    cin>>n;
    if(n==1918){
        cout<<"26.09."<<n;
    }
    else if(n<=1917){
        if(n%4==0) cout<<"12.09."<<n;
        else cout<<"13.09."<<n;
    }
    else{
        if((n%400)==0 || (n%4==0 && n%100!=0)) cout<<"12.09."<<n;
        else cout<<"13.09."<<n;
    }
    return 0;
}
