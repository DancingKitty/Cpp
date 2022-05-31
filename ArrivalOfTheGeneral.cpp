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
    
    int n,min=100,max=0,mini=0,maxi=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        int a;
        cin>>a;
        if(a>max){
            max=a;
            maxi=i;
        }
        if(a<=min){
            min=a;
            mini=i;
        }
    }
    if(maxi>mini) cout<<maxi-1+n-mini-1<<"\n";
    else cout<<maxi-1+n-mini<<"\n";
    return 0;
}
