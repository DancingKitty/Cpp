#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[3];
	int b[3];
	int al=0;
	int bob=0;
	
	for(int i=0; i<3; i++)
	{
		cin>>a[i];
	}
	
	for(int i=0; i<3; i++)
	{
		cin>>b[i];
	}
	
	for(int i=0; i<3; i++)
	{
		if(a[i]>b[i])
		{
			al=al+1;
		}
		
		else if(b[i]>a[i])
		{
			bob=bob+1;
		}
		
		else if(a[i]==b[i])
		{
			al=al+0;
			bob=bob+0;
		}
	}
	
	cout<<al<<" "<<bob;
}
