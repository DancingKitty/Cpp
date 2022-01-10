#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int z,y,a,b,c;
        cin>>z>>y>>a>>b>>c;
        if((z-y)>=(a+b+c))
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}