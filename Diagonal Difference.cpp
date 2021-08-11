#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	int a[n][n];
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin>>a[i][j];
		}
	}
	
	int sum1=0,sum2=0;
	
	for(int i=0; i<n; i++)
	{
		for(int j=i; j<=i; j++)
		{
			sum1+=a[i][j];
		}
		
		for(int j=((n-1)-i); j<=((n-1)-i); j++)
		{
			sum2+=a[i][j];
		}

	}
	
	if(sum1>sum2)
	{
		cout<<sum1-sum2;
	}
	
	else
	{
		cout<<sum2-sum1;
	}
}
