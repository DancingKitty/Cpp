#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
		int n;
		cin>>n;
		n=n-2;
		n=n/2;
		n=n*(n+1)/2;
		cout<<n<<"\n";
	}
}
