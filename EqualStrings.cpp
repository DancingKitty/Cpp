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
        int n,c1=0;
        string s1,s2;
        cin>>n>>s1>>s2;
        string s3="";
        for(int i=0; i<n; i++) if(s1[i]!=s2[i]) s3+=s2[i];
        sort(s3.begin(), s3.end());
        int m=s3.length();
        for(int i=0; i<(m-1); i++) if(s3[i+1]!=s3[i]) c1++;
        cout<<c1+1<<"\n";
    }
    return 0;
}