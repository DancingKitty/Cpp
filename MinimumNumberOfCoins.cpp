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
    
    int t;
    cin>>t;
    for(int i=0; i<t; i++){  
        int n,m=1,count=0;
        cin>>n;
        int a[2]={5,10};
        if(n%5==0){
            while(n>0){
            if(n>=a[m]){
                n-=a[m];
                count++;
            }
            else m--;
            }
            if(count>0) cout<<count<<"\n";
            else cout<<-1<<"\n";
        }
        else cout<<"-1\n";
    }
    return 0;
}