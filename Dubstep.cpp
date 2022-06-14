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
    
    int count=0;
    string s;
    bool wub=true;
    cin>>s;
    int n=s.length();
    for(int i=0; i<n; i++){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            i+=2;
            if(!wub && count==0){
                cout<<" ";
                count++;
            }
        }
        else{
            wub=false;
            cout<<s[i];
            count=0;
        }
    }
    return 0;
}

