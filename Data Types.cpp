#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    int a;
    cin>>a;
    cout<<a+i<<"\n";
    
    float b;
    cin>>b;
    printf("%.1f\n", b+d);
    
    string c;
    getline(cin, c);
    getline(cin, c);
    s = s+c;
    cout<<s<<"\n";
    return 0;
}
