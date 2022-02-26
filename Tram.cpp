#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define vsort sort(v.begin(),v.end())
#define vpb v.push_back
#define asort sort(a,a+n)
 
signed main(){
    fastio;
    
    int n,count=0;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int a,b;
        cin>>a>>b;
        count+=b;
        count-=a;
        vpb(count);
    }
    vsort;
    cout<<v.back();
 
    return 0;
}