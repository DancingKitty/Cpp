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
        int count=0;
        string s;
        cin>>s;
        int n=s.length();
        for(int i=0; i<(n-1); i++){
            if(s[i]=='>' && s[i+1]=='<'){
                s[i]='<';
                s[i+1]='>';
            }
        }
        for(int i=0; i<(n-1); i++) if(s[i]=='>' && s[i+1]=='<') count++;
        cout<<count<<"\n";
    }
    return 0;
}