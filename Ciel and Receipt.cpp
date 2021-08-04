#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int temp, ans = 0, last=2048;
        cin >> temp;
        while(temp)
        {
            ans += temp / last;
            temp = temp % last;
            last /= 2;
        }
        cout << ans <<"\n";
    }
}
