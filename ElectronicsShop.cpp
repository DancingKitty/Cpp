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

    vv;
    int b,n,m,count=0;
    cin>>b>>n>>m;
    int a1[n],a2[m];
    for(int i=0; i<n; i++) cin>>a1[i];
    for(int i=0; i<m; i++) cin>>a2[i];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if((a1[i]+a2[j])<=b){
                vpb(a1[i]+a2[j]);
                count++;
            }
        }
    }
    vsort;
    if(count==0) cout<<"-1\n";
    else cout<<v.back();
    return 0; 
}
