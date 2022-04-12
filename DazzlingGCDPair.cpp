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
        int a,b;
        cin>>a>>b;
        if((b-a)==1) cout<<-1<<"\n";
        else{
            if(a==1 && (b-a)>=3) cout<<(a+1)<<" "<<(a+3)<<"\n";
            else if(a%2==0) cout<<a<<" "<<a+2<<"\n";
            else if(a%3==0 && (b-a)>=3) cout<<a<<" "<<a+3<<"\n";
            else if(a%5==0 && (b-a)>=3) cout<<a+1<<" "<<a+3<<"\n";
            else if((b-a)>=3) cout<<(a+1)<<" "<<(a+3)<<"\n";
            else cout<<-1<<"\n";
        }
    }
    return 0;
}