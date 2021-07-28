#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int last_digit = n%10;
        while(n>=10)
        {
            n/=10;
        }
        int first_digit = n;
        cout<<first_digit + last_digit<<endl;
    }
}
