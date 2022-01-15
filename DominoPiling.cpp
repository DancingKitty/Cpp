#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int x=(m*n);
    if((x%4)==0) cout<<(x/2);
    else if((x%4)==1) cout<<(x/2);
    else if((x%4)==2) cout<<(x/2);
    else if((x%4)==3) cout<<floor(x/2);
}