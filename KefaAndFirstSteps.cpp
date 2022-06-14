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
    
    int n,count=0;
    vv;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    if(n==1) cout<<1;
    else{
        for(int i=0; i<n-1; i++){
        if(a[i+1]>=a[i]){
            count++;
            vpb(count);
        }
        else{
            count=0;
            vpb(count);
        }
        }
        vsort;
        cout<<v.back()+1;
    }
    return 0;
}


