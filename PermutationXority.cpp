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
        int n;
        cin>>n;
        if(n==2) cout<<-1<<"\n";
        else{
            if(n%2!=0) for(int i=n; i>=1; i--) cout<<i<<" ";
            else if(n%2==0){
                for(int i=n; i>4; i--) cout<<i<<" ";
                cout<<4<<" "<<1<<" "<<3<<" "<<2;
            }
        }
        cout<<"\n";
    }
    return 0;
}