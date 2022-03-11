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
        int crm=0,cm=0,ce=0,cb=0;
        for(int i=0; i<4; i++){
            string s;
            int n;
            cin>>s>>n;
            if(s=="Barcelona") cb+=n;
            else if(s=="RealMadrid") crm+=n;
            else if(s=="Malaga") cm+=n;
            else if(s=="Eibar") ce+=n;
        }
        if(cm>crm && cb>ce) cout<<"Barcelona\n";
        else cout<<"RealMadrid\n";
    }
    return 0;
}