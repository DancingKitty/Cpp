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
    
    string s1;
    string s2="";
    cin>>s1;
    int n=s1.length();
    for(int i=0; i<n; i++){
        s1[i]=tolower(s1[i]);
        if(s1[i]!='A' && s1[i]!='a' && s1[i]!='E' && s1[i]!='e' && s1[i]!='I' && s1[i]!='i' && s1[i]!='O' && s1[i]!='o' && s1[i]!='U' && s1[i]!='u' && s1[i]!='Y' && s1[i]!='y'){
            s2+=".";
            s2+=s1[i];
        }
    }
    cout<<s2<<"\n";
    return 0;
}
