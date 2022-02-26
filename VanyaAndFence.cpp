#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define vsort sort(v.begin(),v.end())
#define vpb v.push_back
#define asort sort(a,a+n)
 
signed main(){
    fastio;
    
    int n,h,count=0;
    cin>>n>>h;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        if(a>h) count+=2;
        else count++;
    }
    cout<<count;
 
    return 0;
}