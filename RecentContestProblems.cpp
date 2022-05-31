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
        int n,s1=0,l1=0;
        cin>>n;
        for(int i=0; i<n; i++){
            string s;
            cin>>s;
            if(s=="LTIME108") s1++;
            else l1++;
        }
        cout<<s1<<" "<<l1<<"\n";
    }
    return 0;
}