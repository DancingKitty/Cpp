#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0; i<n; i++)
	{
	int a,b,c;
	cin>>a>>b>>c;
	vector<int> v;
	int l = a+b;
	int m = b+c;
	int n = a+c;
	v.push_back(l);
	v.push_back(m);
	v.push_back(n);
	sort(v.begin(),v.end());
	cout<<v[2]<<"\n";
	}
}
