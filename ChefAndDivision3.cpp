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
        int n,k,d,sum=0,count=0;
        cin>>n>>k>>d;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum>=(k*d)) cout<<d<<"\n";
        else if(sum>=k){
            cout<<sum/k<<"\n";
        }
        else cout<<count<<"\n";
    }
    return 0;
}