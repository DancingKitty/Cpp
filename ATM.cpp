#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    float b;
    cin>>a>>b;
    if((a%5)==0 && b>=a+0.5)
    printf("%.2f", (b-a)-0.50);
    else if(b==a)
    cout<<"0";
    else 
    printf("%.2f", b);
}