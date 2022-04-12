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
    
    string a,b;
    cin>>a>>b;
    int n=a.size();
    for(int i=0; i<n; i++){
        if((a[i]=='1' && b[i]=='0') || (a[i]=='0' && b[i]=='1')) cout<<"1";
        else cout<<"0";
    }

    return 0;
}