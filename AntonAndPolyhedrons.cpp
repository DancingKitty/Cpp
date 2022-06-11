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
    
    int t, count=0;;
    cin>>t;
    for(int i=0; i<t; i++){  
        string s;
        cin>>s;
        if(s=="Tetrahedron") count+=4;
        else if(s=="Cube") count+=6;
        else if(s=="Octahedron") count+=8;
        else if(s=="Dodecahedron") count+=12;
        else if(s=="Icosahedron") count+=20;
    }
    cout<<count<<"\n";
    return 0;
}