#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	long int a[10];
	long int sum=0;
	
	cin>>n;
	
	for (int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	
	for (int i=0; i<n; i++)
	{
		sum=sum+a[i];
	}
	
	cout<<sum;
}
