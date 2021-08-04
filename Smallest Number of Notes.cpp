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
	int count=0;
	while(n>0)
	{
		if(n>=100)
		{
			n-=100;
			count++;
		}
		
		else if(n>=50 && n<100)
		{
			n-=50;
			count++;
		}
		
		else if(n>=10 && n<50)
		{
			n-=10;
			count++;
		}
		
		else if(n>=5 && n<10)
		{
			n-=5;
			count++;
		}
		
		else if(n>=2 && n<5)
		{
			n-=2;
			count++;
		}
		
		else if(n>=1 && n<2)
		{
			n-=1;
			count++;
		}
	}
	cout<<count<<"\n";
	}
}
