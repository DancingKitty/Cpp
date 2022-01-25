#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int x,y,z;
        cin>>x>>y>>z;
        if(x>=y) cout<<"PIZZA\n";
        else if((x<y) && (x<z)) cout<<"NOTHING\n";
        else if((x<y)&&(x>=z)) cout<<"BURGER\n";
    }
}