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
        int n,x=0;
        string s;
        int a[26]={0};
        cin>>n>>s;
        for(int i=0; i<n; i++){
            a[s[i]-'A']++;
            if(a[s[i]-'A']>1 && s[i-1]!=s[i]){
                x=1;
                break;
            }
        }
        if(x==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}