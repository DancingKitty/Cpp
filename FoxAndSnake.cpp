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
    for(int i=1; i<=n; i++){
        if(i%2!=0) {
            for(int j=0; j<m; j++) cout<<"#";
            cout<<"\n";
        }
        else if(i%4==0){
            cout<<"#";
            for(int j=1; j<m; j++) cout<<".";
            cout<<"\n";
        }
        else{
            for(int j=0; j<m-1; j++) cout<<".";
            cout<<"#\n";
        }
    }
    return 0;
}