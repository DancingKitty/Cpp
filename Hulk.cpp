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
    
    int n;
    cin>>n;
    string s;
    string s1 = "I love that ";
    string s2 = "I hate that ";
    if(n%2==0){
        for(int i=1; i<=(n-1); i++){
            if(i%2==0) s+=s1;
            else if(i%2!=0) s+=s2;
        }
        cout<<s+"I love it";
    }
    else if(n%2!=0){
        for(int i=1; i<=(n-1); i++){
            if(i%2==0) s+=s1;
            else if(i%2!=0) s+=s2;
        }
        cout<<s+"I hate it";
    }

    return 0;
}