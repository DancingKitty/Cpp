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

    int n,ca=0,cd=0;
    string s;
    cin>>n>>s;
    for(int i=0; i<n; i++){
        if(s[i]=='A') ca++;
        else cd++;
    }
    if(ca>cd) cout<<"Anton\n";
    else if(cd>ca) cout<<"Danik\n";
    else cout<<"Friendship\n";

    return 0;
}