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

    int a;
    cin>>a;
    for(int i=(a+1); i<=9999; i++){
        if((i%10 != (i%100)/10) && (i%10 != (i%1000)/100) && (i%10 != (i%10000)/1000) && ((i%100)/10 != (i%1000)/100) && ((i%100)/10 != (i%10000)/1000) && ((i%1000)/100 != (i%10000)/1000)){cout<<i;break;}
    }

    return 0;
}