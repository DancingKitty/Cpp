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
        int n;
        cin>>n;
        string s="";
        if(n%2==0){
            s+="10";
            for(int i=2; i<(n-2); i++) s+='0';
            s+="01";
            cout<<s<<"\n";
        }
        else{
            for(int i=0; i<(n/2); i++) s+='0';
            s+='1';
            for(int i=((n/2)+1); i<n; i++) s+='0';
            cout<<s<<"\n";
        }
    }
    return 0;
}

