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
    
    int n,m;
    cin>>n>>m;
    int a[m];
    for(int i=0; i<m; i++) cin>>a[i];
    sort(a,a+m);
    int min=a[n-1]-a[0];
    for(int i=1; i<=(m-n); i++){
        if((a[i+n-1]-a[i])<min){
            min=a[i+n-1]-a[i];
        }
    }
    cout<<min<<"\n";
    return 0;
}
