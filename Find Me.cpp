#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,count=0;
	cin>>n>>k;
	int a[n];
	for(int i=0; i<n; i++)
	cin>>a[i];
	for(int i=0; i<n; i++)
	{
		if(a[i]==k)
		count++;
	}	
	if(count>0)
	cout<<"1";
	else if(count==0)
	cout<<"-1";
}
