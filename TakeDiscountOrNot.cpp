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
    
    int t;
    cin>>t;
    for(int i=0; i<t; i++){ 
        int n,x,y,sum1=0,sum2=0;
        cin>>n>>x>>y;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
            sum1+=a[i];
        } 
        for(int i=0; i<n; i++) if(a[i]>=y) sum2+=(a[i]-y);
        if(sum2+x>=sum1) cout<<"NO COUPON\n";
        else cout<<"COUPON\n";
    }
    return 0;
}

