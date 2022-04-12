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
        int n,x,y,c1=0,c2=0;
        string s;
        cin>>n>>x>>y>>s;
        sort(s.begin(),s.end());
        if(y>=x){
        for(int i=0; i<n-1; i++){
            if(s[i]=='0' && s[i+1]=='1') c1++;
            else if(s[i]=='1' && s[i+1]=='0') c2++;
        }
        cout<<(c1*x)+(c2*y)<<"\n";
        }
        else{
            reverse(s.begin(),s.end());
            for(int i=0; i<n-1; i++){
            if(s[i]=='0' && s[i+1]=='1') c1++;
            else if(s[i]=='1' && s[i+1]=='0') c2++;
            }
        cout<<(c1*x)+(c2*y)<<"\n";            
        }
    }
    return 0;
}