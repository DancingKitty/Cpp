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
        int px,py,qx,qy;
        cin>>px>>py>>qx>>qy;
        cout<<((2*qx)-px)<<" "<<((2*qy)-py)<<"\n";
    }
    return 0;
}