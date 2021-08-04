#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	int n,count=0;
	cin>>n;
	if(n==1)
	cout<<"no\n";
	else
	{
	for(int i=1; i<=n; i++)
	{
		if((n%i)==0)
		count++;
	}
	if(count>2)
	cout<<"no\n";
	else
	cout<<"yes\n";
	}
	}
}
