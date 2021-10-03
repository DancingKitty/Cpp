#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,d;
	cin>>n>>d;
	int a[n],b[n];
	for(int i=0; i<n; i++)
	cin>>a[i];
	for(int i=0; i<n; i++)
	b[i]=a[i];
	for(int i=0; i<n; i++)
	{
		if(i>=d)
		a[i-d]=a[i];
	}
	for(int i=0; i<n; i++)
	{
		if(i<d)
		a[i+(n-d)]=b[i];
	}
	for(int i=0; i<n; i++)
	cout<<a[i]<<" ";
}
