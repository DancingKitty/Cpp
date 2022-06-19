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
        int n,x;
        vv;
        cin>>n;
        if(n==2) cout<<1<<" "<<2;
        else{
            if(n%2!=0){
                vpb(n);
                for(int i=(n-1); i>0; i--){
                    if(i%2==0) n-=i;
                    else n+=i;
                    vpb(n);
                }
                int m=v.size();
                for(int i=(m-1); i>=0; i--) cout<<v[i]<<" ";
            }
            else{
                vpb(n);
                for(int i=(n-1); i>0; i--){
                    if(i%2!=0) n-=i;
                    else n+=i;
                    vpb(n);
                }
                int m=v.size();
                for(int i=(m-1); i>=0; i--) cout<<v[i]<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}