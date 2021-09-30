#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n][n];
	vector<int> v;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		cin>>a[i][j];
	}
	for(int i=0; i<(n-2); i++)
	{
		for(int j=0; j<(n-2); j++)
		{
			int sum=0;
			sum = a[i][j]+a[i+1][j]+a[i+2][j]+a[i+1][j+1]+a[i][j+2]+a[i+1][j+2]+a[i+2][j+2];
			v.push_back(sum);
		}
	}
	sort(v.begin(),v.end());
	int c = v.size();
	cout<<v[c-1];
} 
