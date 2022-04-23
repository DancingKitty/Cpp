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
        int x,y,l=0,b=0;
        cin>>x>>y;
        for(int i=1; i<=10000; i++){
            if(i%2!=0){
                l+=i;
                if(l>x) {cout<<"Bob\n"; break;}
            }
            else if(i%2==0){
                b+=i;
                if(b>y) {cout<<"Limak\n"; break;}
            }
        }
    }
    return 0;
}