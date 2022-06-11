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
    
    int t,count=0;
    vector<int> v1;
    vector<int> v2;
    cin>>t;
    for(int i=0; i<t; i++){ 
        int x,y;
        cin>>x>>y;
        v1.push_back(x);
        v2.push_back(y);
    }
    for(int i=0; i<t; i++){
        for(int j=0; j<t; j++) if(v1[i]==v2[j]) count++;
    } 
    cout<<count<<"\n";
    return 0;
}