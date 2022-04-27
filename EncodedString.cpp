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
        string s;
        cin>>n>>s;
        for(int i=0; i<n; i+=4){
            if(s[i]=='0' && s[i+1]=='0' && s[i+2]=='0' && s[i+3]=='0') cout<<"a";
            else if(s[i]=='0' && s[i+1]=='0' && s[i+2]=='0' && s[i+3]=='1') cout<<"b";
            else if(s[i]=='0' && s[i+1]=='0' && s[i+2]=='1' && s[i+3]=='0') cout<<"c";
            else if(s[i]=='0' && s[i+1]=='0' && s[i+2]=='1' && s[i+3]=='1') cout<<"d";
            else if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='0' && s[i+3]=='0') cout<<"e";
            else if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='0' && s[i+3]=='1') cout<<"f";
            else if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='1' && s[i+3]=='0') cout<<"g";
            else if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='1' && s[i+3]=='1') cout<<"h";
            else if(s[i]=='1' && s[i+1]=='0' && s[i+2]=='0' && s[i+3]=='0') cout<<"i";
            else if(s[i]=='1' && s[i+1]=='0' && s[i+2]=='0' && s[i+3]=='1') cout<<"j";
            else if(s[i]=='1' && s[i+1]=='0' && s[i+2]=='1' && s[i+3]=='0') cout<<"k";
            else if(s[i]=='1' && s[i+1]=='0' && s[i+2]=='1' && s[i+3]=='1') cout<<"l";
            else if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='0' && s[i+3]=='0') cout<<"m";
            else if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='0' && s[i+3]=='1') cout<<"n";
            else if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='1' && s[i+3]=='0') cout<<"o";
            else if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='1' && s[i+3]=='1') cout<<"p";
        }
        cout<<"\n";
    }
    return 0;
}