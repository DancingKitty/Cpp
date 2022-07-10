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
        string s;
        int n;
        cin>>n>>s;
        string s1="";
        for(int i=0; i<n; i++){
            if(s[i]=='A') s1+='T';
            else if(s[i]=='T') s1+='A';
            else if(s[i]=='C') s1+='G';
            else if(s[i]=='G') s1+='C';
        }
        cout<<s1<<"\n";
    }
    return 0;
}
