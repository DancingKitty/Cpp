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
    
    int n,k,c,sum=0;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i]; 
        sum+=a[i];
    }
    cin>>c;
    if(((sum-a[k])/2)==c) cout<<"Bon Appetit";
    else cout<<a[k]/2;
    return 0;
}
