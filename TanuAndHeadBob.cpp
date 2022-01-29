#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        char a[n];
        int ci=0,cn=0,cy=0;
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++){
            if(a[i]=='I') ci++;
            else if(a[i]=='Y') cy++;
            else if(a[i]=='N') cn++;
        }
        if(ci>0) cout<<"INDIAN\n";
        else if(cn==n) cout<<"NOT SURE\n";
        else cout<<"NOT INDIAN\n";
    }
}