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
        string s;
        cin>>s;
        int n=s.size();
        int count=0;
        if(n%2!=0) cout<<"NO\n";
        else{
            for(int i=0; i<n/2; i++){
                if(s[i]==s[(n/2)+i]) count++;
            }
            if(count==n/2) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}