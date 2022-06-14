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
    
    int t;
    cin>>t;
    for(int i=0; i<t; i++){ 
        int n,count=0,c1=0;
        cin>>n;
        vv;
        while(n>0){
            int temp;
            temp=n%10;
            vpb(temp);
            n=n/10;
            count++;
        }
        for(int i=0; i<count; i++){
            if(v[i]>0) c1++;
        }
        cout<<c1<<"\n";
        for(int i=0; i<count; i++){
            if(v[i]>0) cout<<(v[i]*pow(10,i))<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
