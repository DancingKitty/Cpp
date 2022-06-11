#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    int n,count=0,m=4;
    cin>>n;        
    int a[5]={1,5,10,20,100};
    while(n>0){
        if(n>=a[m]){
            n-=a[m];
            count++;
        }
        else m--;
    }
    cout<<count<<"\n";
}
 