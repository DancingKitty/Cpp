#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	
	int even=0;
	int odd=0;
	
	for(int i=0; i<n; i++)
	{
		if((a[i]%2)==0)
		{
			even+=1;
		}
		
		else if((a[i]%2)!=0)
		{
			odd+=1;
		}
	}
	
	if(even>odd)
	{
		cout<<"READY FOR BATTLE";
	}
	
	else if(odd>=even)
	{
		cout<<"NOT READY";
	}
}
