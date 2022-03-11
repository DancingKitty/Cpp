//author : elvenblade
//जय हिंद, जय महाराष्ट्र !

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define vsort sort(v.begin(),v.end())
#define vpb v.push_back
#define asort sort(a,a+n)

signed main(){
    fastio;
    
    int t;
    cin>>t;
    for(int i=0; i<t; i++){  
        int n;
        float a,b,c1=0,c2=0;
        cin>>n>>a>>b;
        int arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];
        for(int i=0; i<n; i++) if(arr[i]==a) c1++;
        for(int i=0; i<n; i++) if(arr[i]==b) c2++;
        float k = (c1*c2)/(n*n);
        printf("%.10f\n", k);

    }
    return 0;
}