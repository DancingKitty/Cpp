#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n,sum1=0,sum2=0;
	cin>>n;
	for(int i=1; i<=n; i++)
	sum1 = sum1 + (2*i);
	for(int j=1; j<=n; j++)
	sum2 = sum2 + ((2*j)-1);
	cout<<sum2<<" "<<sum1;
}
