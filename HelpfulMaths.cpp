#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    int n=a.size();
    vector<char> v;
    for(int i=0; i<n; i+=2) v.push_back(a[i]);
    int d=v.size();
    sort(v.begin(), v.end());
    for(int i=0; i<(d-1); i++) cout<<v[i]<<"+";
    cout<<v[d-1];
}