
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define vsort sort(v.begin(),v.end())
#define vpb v.push_back
#define asort sort(a,a+n)
 
signed main(){
    fastio;
 
    int n,k;
    cin>>n>>k;
    for(int i=0; i<k; i++){
        if(n%10==0) n=n/10;
        else n--;
    }
    cout<<n;
 
    return 0;
}