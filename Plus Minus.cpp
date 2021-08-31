#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int positive=0;
	int negative=0;
	int zero=0;
	float pfinal;

	int a[100];
	
	cin>>n;
	
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	
	for(int i=0; i<n; i++)
	{
		if(a[i]>0)
		{
			positive=positive+1;
		}
	}
	
	for(int i=0; i<n; i++)
	{
		if(a[i]<0)
		{
			negative=negative+1;
		}
	}
	
	for(int i=0; i<n; i++)
	{
		if(a[i]==0)
		{
			zero=zero+1;
		}
	}
	
	pfinal=(positive/n);
	
	printf("%.3f",pfinal);
	
	
}
