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
        int a,b,k,count=0;
        cin>>a>>b;
        k=abs(a-b);
        for(int i=1; i<=sqrt(k); i++){
            if(k%i==0){
                if(k/i==i) count++;
                else count+=2;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}
