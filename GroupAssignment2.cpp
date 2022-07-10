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
    
    int t;
    cin>>t;
    for(int i=0; i<t; i++){  
        int n,count=0,count1=0;
        cin>>n;
        int a[n];
        map<int,int> m;
        for(int i=0; i<n; i++){
            cin>>a[i];
            m[a[i]]++;
        }
        for(auto x=m.cbegin(); x!=m.cend(); x++){
            if((((*x).second)%((*x).first))==0) count++;
        }
        for(auto x=m.cbegin(); x!=m.cend(); x++) count1++;
        if(count==count1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
