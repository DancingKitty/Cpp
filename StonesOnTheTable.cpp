#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    char a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<(n-1); i++){
        if(a[i+1]==a[i]) count++;
    }
    cout<<count;
}