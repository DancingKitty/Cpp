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
    
    int n,max1=0,max2=0;
    map<int,int> m;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        m[a[i]]++;
    }
    for(auto x=m.cbegin(); x!=m.cend(); x++){
        if((*x).second>max1){
            max1=(*x).second;
            max2=(*x).first;
        }
        else if((*x).second==max1 && max2>(*x).first){
            max2=(*x).first;
        }
    }
    cout<<max2;
    return 0;
}