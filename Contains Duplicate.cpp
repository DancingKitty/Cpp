#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0;
	cin>>n;
	int a[n];
	vector<int> v;
	for(int i=0; i<n; i++)
	cin>>a[i];
	for(int i=0; i<n; i++)
	{
		int count=0;
		int b;
		b=a[i];
		for(int j=0; j<n; j++)
		{
			if(a[j]==b)
			count++;
		} 
		v.push_back(count);
	}
	int c = v.size();
	for(int i=0; i<c; i++)
	{
		if(v[i]>=2)
		sum++;
	}
	if(sum>0)
	cout<<"true";
	else
	cout<<"false";
}
