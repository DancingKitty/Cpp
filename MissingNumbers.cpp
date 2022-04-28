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

signed main() { 
    fastio;
    
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    { 
        int arr[4]; 
        for (int i=0; i<4; i++) cin>>arr[i]; 
        sort(arr,arr+4); 
        int a1=(arr[2]+arr[0])/2; 
        int b1=arr[2]-a1; 
        int a2=(arr[2]+arr[1])/2; 
        int b2=arr[2]-a2; 
        int a3=(arr[3]+arr[0])/2; 
        int b3=arr[3]-a3; 
        int a4=(arr[3]+arr[1])/2; 
        int b4=arr[3] - a4; 
        if ((a1 % 1 == 0) && (a1 != 0) && (b1 % 1 == 0) && (b1 != 0)) if ((a1 / b1 == arr[1]) && (a1 * b1 == arr[3]) && (a1 >= 1) && (b1 >= 1) && (a1 <= 10000) && (b1 <= 10000))  {cout << a1 << " " << b1 << endl; continue;} 
        for(int i=0; i<4; i++){}
        if ((a2 % 1 == 0) && (a2 != 0) && (b2 % 1 == 0) && (b2 != 0)) if ((a2 / b2 == arr[0]) && (a2 * b2 == arr[3]) && (a2 >= 1) && (b2 >= 1) && (a2 <= 10000) && (b2 <= 10000))  {cout << a2 << " " << b2 << endl;continue;} 
        if ((a3 % 1 == 0) && (a3 != 0) && (b3 % 1 == 0) && (b3 != 0)) if ((a3 / b3 == arr[1]) && (a3 * b3 == arr[2]) && (a3 >= 1) && (b3 >= 1) && (a3 <= 10000) && (b3 <= 10000)) {cout << a3 << " " << b3 << endl;continue;} 
        for(int i=0; i<4; i++){}
        if ((a4 % 1 == 0) && (a4 != 0) && (b4 % 1 == 0) && (b4 != 0)) if ((a4 / b4 == arr[0]) && (a4 * b4 == arr[2]) && (a4 >= 1) && (b4 >= 1) && (a4 <= 10000) && (b4 <= 10000)) {cout << a4 << " " << b4 << endl;continue;} 
        cout<<"-1 -1"<<endl; 
    } 
    return 0; 
}