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
        int n,count=0;
        string a;
        cin>>n>>a;
        for(int i=0; i<n; i++) if(a[i]!=a[n-1-i]) count++;
        int k=(count+1)/2;
        if(k%2==0) cout<<(count+1)/4<<"\n";
        else cout<<((count+1)/4)+1<<"\n";
    }
    return 0;
}