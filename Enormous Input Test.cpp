#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n,k;
	cin>>n>>k;
	
	int a[n];
	
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	
	long count=0;
	
	for(int i=0; i<n; i++)
	{
		if(a[i]%k==0)
		{
			count=count+1;
		}
	}
	
	cout<<count;
}
