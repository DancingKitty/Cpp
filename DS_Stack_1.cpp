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
    
    stack<int> s;
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }

    return 0;
}