#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n,a;
        cin>>n>>a;
        if((n-a)>=a) cout<<a<<"\n";
        else if(a>(n-a)) cout<<(n-a)<<"\n";
    }
}
