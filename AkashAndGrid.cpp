#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n,a,b;
        cin>>n>>a>>b;
        if((a+b)%2==0)
        cout<<"0\n";
        else
        cout<<"1\n";
    }
}