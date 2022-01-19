#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,w;
    cin>>k>>n>>w;
    if((((w*(w+1)*k)/2)-n)>0) cout<<((w*(w+1)*k)/2)-n;
    else cout<<"0";
}