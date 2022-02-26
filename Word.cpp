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
    
    string s;
    char c;
    cin>>s;
    int n=s.size();
    int cc=0,cn=0;
    for(int i=0; i<n; i++){
        if(s[i]=='a'||s[i]=='b'||s[i]=='c'||s[i]=='d'||s[i]=='e'||s[i]=='f'||s[i]=='g'||s[i]=='h'||s[i]=='i'||s[i]=='j'||s[i]=='k'||s[i]=='l'||s[i]=='m'||s[i]=='n'||s[i]=='o'||s[i]=='p'||s[i]=='q'||s[i]=='r'||s[i]=='s'||s[i]=='t'||s[i]=='u'||s[i]=='v'||s[i]=='w'||s[i]=='x'||s[i]=='y'||s[i]=='z') cn++;
        else cc++;
    }
    if(cn>=cc){
        for(int i=0; i<n; i++){
            c=tolower(s[i]);
            cout<<c;
        }
    }
    else{
        for(int i=0; i<n; i++){
            c=toupper(s[i]);
            cout<<c;
        }
    }
    return 0;
}