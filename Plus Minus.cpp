#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	float plus=0,minus=0,zero=0;
	float l,m,p;
	cin>>n;
	int a[n];
	
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	
	for(int i=0; i<n; i++)
	{
		if(a[i]>0)
		{
			plus=plus+1;
		}
		
		else if(a[i]<0)
		{
			minus=minus+1;
		}
		
		else if(a[i]==0)
		{
			zero=zero+1;
		}
	}
	
	l=plus/n;
	m=minus/n;
	p=zero/n;
	
	printf("%.6f\n",l);
	printf("%.6f\n",m);
	printf("%.6f\n",p);
}
