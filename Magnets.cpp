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
    
    int n,count=0;
    cin>>n;
    vv;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        vpb(a);
    }
    int m=v.size();
    for(int i=0; i<m-1; i++) if((v[i]==10 && v[i+1]==1) || (v[i]==1 && v[i+1]==10)) count++;
    cout<<count+1<<"\n";

    return 0;
}