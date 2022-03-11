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
    
    int t;
    cin>>t;
    for(int i=0; i<t; i++){  
        int n,count=8;
        cin>>n;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            if(a==6 || a==7 || a==13 || a==14 || a==27 || a==28 || a==20 || a==21) count+=0;
            else count++;
        }
        cout<<count<<"\n";
    }
    return 0;
}