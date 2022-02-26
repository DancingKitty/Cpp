//author : elvenblade
//जय हिंद, जय महाराष्ट्र !

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define vsort sort(v.begin(),v.end())
#define vpb v.push_back
#define asort sort(a,a+n)

signed main(){
    fastio;
    
    int t;
    cin>>t;
    for(int i=0; i<t; i++){  
        int a,b,temp,count=0;
        cin>>a>>b;
        vector<int> v;
        int n=(a+b);
        while(n>0){
            temp=n%10;
            vpb(temp);
            n=n/10;
        }
        for(int i=0; i<v.size(); i++){
            if(v[i]==0 || v[i]==6 || v[i]==9) count+=6;
            else if (v[i]==2 || v[i]==3 || v[i]==5) count+=5;
            else if(v[i]==1) count+=2; 
            else if(v[i]==7) count+=3;
            else if(v[i]==8) count+=7;
            else if(v[i]==4) count+=4;
        }
        cout<<count<<"\n";
    }
    return 0;
}