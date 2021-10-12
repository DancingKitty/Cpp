#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,d,count=0;
	cin>>n;
	int a[n];
	vector<int> v;
	for(int i=0; i<n; i++)
	cin>>a[i];
	cin>>d>>m;
	for(int i=0; i<=(n-m); i++)
	{
		int sum=0;
		for(int j=i; j<(m+i); j++)
		sum+=a[j];
		v.push_back(sum);
	}
	int c=v.size();
	for(int i=0; i<c; i++)
	{
		if(v[i]==d)
		count++;
	}
	cout<<count;
}
