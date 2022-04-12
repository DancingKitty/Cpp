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
    

    int a,b; 
    cin>>a>>b;
    if(a==1 && b==1) cout<<"https://discuss.codechef.com\n";
    else if(a==0 && b==0) cout<<"https://www.codechef.com/practice\n";
    else if(a==0 && b==1) cout<<"https://www.codechef.com/practice\n";
    else if(a==1 && b==0) cout<<"https://www.codechef.com/contests\n";

    return 0;
}