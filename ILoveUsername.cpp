//author : elvenblade
//जय हिंद, जय महाराष्ट्र !
 
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define vsort sort(v.begin(),v.end())
#define vpb v.push_back
#define asort sort(a,a+n)
#define vv vector<int> v
#define rev reverse(a, a+n) 
 
signed main(){
    fastio;
    
    int n,min,max,count=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    min=a[0];
    max=a[0];
    for(int i=1; i<n; i++){
        if(a[i]>max){
            max=a[i];
            count++;
        }
        else if(a[i]<min){
            min=a[i];
            count++;
        }
    }
    cout<<count<<"\n";
    return 0;
}
 