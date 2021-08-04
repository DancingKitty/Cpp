#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	long a,b;
	cin>>a>>b;
	long c = __gcd(a,b);
	long d = ((a*b)/c);
	cout<<c<<" "<<d<<"\n";
	}
}
