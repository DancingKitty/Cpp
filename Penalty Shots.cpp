#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0; i<n; i++)
	{
	int a[10],count1=0,count2=0;
	for(int i=1; i<=10; i++)
	cin>>a[i];
	for(int i=1; i<=10; i++)
	{
		if((i%2)!=0)
		{
			if(a[i]==1)
			count1++;
		}
		else if((i%2)==0)
		{
			if(a[i]==1)
			count2++;
		}
	}
	if(count1>count2)
	cout<<"1\n";
	else if(count2>count1)
	cout<<"2\n";
	else if(count1==count2)
	cout<<"0\n";
	}
}
