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
     
        string s1;
        int n;
        cin>>s1>>n;
        for(int i=0; i<n; i++){
            string s2;
            int count=0;
            cin>>s2;
            for(int i=0; i<s2.size(); i++){
                for(int j=0; j<s1.size(); j++) if(s1[j]==s2[i]) count++;
            }
            if(count==(s2.size())) cout<<"Yes\n";
            else cout<<"No\n"; 
        }

    return 0;
}