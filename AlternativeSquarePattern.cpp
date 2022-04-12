#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        if((i%2)==0) cout<<i*5<<" "<<(i*5)-1<<" "<<(i*5)-2<<" "<<(i*5)-3<<" "<<(i*5)-4<<"\n";
        else if((i%2)!=0) cout<<(i*5)-4<<" "<<(i*5)-3<<" "<<(i*5)-2<<" "<<(i*5)-1<<" "<<i*5<<"\n";
    }
}