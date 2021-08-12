#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	int n,k,count=0;
	cin>>n>>k;
	int a[n];
	for(int i=0; i<n; i++)
	cin>>a[i];
	for(int i=0; i<n; i++)
	{
		if(((a[i]+k)%7)==0)
		count++;
	}
	cout<<count<<"\n";
	}
}
