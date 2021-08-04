#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	int n,d,sum;
	cin>>d>>n;
	for(int i=0; i<d; i++)
	{
		sum=(n*(n+1))/2;
		n=sum;
	}
	cout<<n<<"\n";
	}
}
