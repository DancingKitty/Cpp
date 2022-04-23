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
        int n;
        string s;
        cin>>n>>s;
        if(n%2==0) for(int i=0; i<n; i++) {swap(s[i],s[i+1]);i++;}
        else if(n%2!=0) for(int i=0; i<n-1; i++) {swap(s[i],s[i+1]);i++;}
        
        for(int i=0; i<n; i++){
            if(s[i]=='a') s[i]='z';
            else if(s[i]=='b') s[i]='y';
            else if(s[i]=='c') s[i]='x';
            else if(s[i]=='d') s[i]='w';
            else if(s[i]=='e') s[i]='v';
            else if(s[i]=='f') s[i]='u';
            else if(s[i]=='g') s[i]='t';
            else if(s[i]=='h') s[i]='s';
            else if(s[i]=='i') s[i]='r';
            else if(s[i]=='j') s[i]='q';
            else if(s[i]=='k') s[i]='p';
            else if(s[i]=='l') s[i]='o';
            else if(s[i]=='m') s[i]='n';
            else if(s[i]=='n') s[i]='m';
            else if(s[i]=='o') s[i]='l';
            else if(s[i]=='p') s[i]='k';
            else if(s[i]=='q') s[i]='j';
            else if(s[i]=='r') s[i]='i';
            else if(s[i]=='s') s[i]='h';
            else if(s[i]=='t') s[i]='g';
            else if(s[i]=='u') s[i]='f';
            else if(s[i]=='v') s[i]='e';
            else if(s[i]=='w') s[i]='d';
            else if(s[i]=='x') s[i]='c';
            else if(s[i]=='y') s[i]='b';
            else if(s[i]=='z') s[i]='a';
        }

        cout<<s<<"\n";
    }
    return 0;
}