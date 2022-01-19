#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        long k;
        cin>>k;
        if((k%2)==0){
                double n=k;
                vector<int> v;
                n=n/2;
                while((double)n==(int)n){
                v.push_back(n);
                n=n/2;
                }
                int d=v.size();
                cout<<d<<"\n";
        }   
        else cout<<"0\n";
    }
}