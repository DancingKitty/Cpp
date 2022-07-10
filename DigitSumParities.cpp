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

signed sum(int x){
    int add=0,temp;
    int k=x;
    while(k>0){
        temp=k%10;
        add+=temp;
        k=k/10;
    }
    return add;
}

signed main(){
    fastio;
    
    int t;
    cin>>t;
    for(int i=0; i<t; i++){  
        int n;
        cin>>n;
        if((sum(n)%2==0 && sum(n+1)%2!=0) || (sum(n)%2!=0 && sum(n+1)%2==0)) cout<<n+1<<"\n";
        else cout<<n+2<<"\n";
    }
    return 0;
}

