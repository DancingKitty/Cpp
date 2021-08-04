#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a = n;
	int count=0;
	vector<int> v;
	for(int i=1; i<=n; i++)
	{
		if((a%i)==0)
		{
			v.push_back(i);
			count++;
		}
	}
	cout<<count<<"\n";
	int b = v.size();
	for(int i=0; i<b; i++)
	cout<<v[i]<<" ";
}
