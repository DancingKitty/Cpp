//author : elvenblade
//जय हिंद, जय महाराष्ट्र !

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

signed main(){
    fastio;
    
        int n,k,count=0;
        cin>>n>>k;
        int a[n];
        for(int i=0; i<n; i++){
            a[i]=0;
        }
        for(int i=0; i<k; i++){
            string s;
            cin>>s;
            if(s=="CLICK"){
                int x;
                cin>>x;
                if(a[x-1]==1){
                    a[x-1]=0;
                    count--;
                }
                else if(a[x-1]==0){
                    a[x-1]=1;
                    count++;
                }
            }
            else if(s=="CLOSEALL"){
                for(int i=0; i<n; i++){
                    a[i]=0;
                }
                count=0;
            }
            cout<<count<<"\n";
        }
    return 0;
}