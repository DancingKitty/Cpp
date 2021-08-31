#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int num;
	int x;
	int a,b;
	vector<int> v;
	
	cin>>n;
	
	for(int i=0; i<n; i++)
	{
		cin>>num;
		v.push_back(num);
	}
	
	cin>>x;
	
	v.erase(v.begin()+(x-1));
	
	cin>>a>>b;
	
	v.erase(v.begin()+(a-1),v.begin()+(b-1));
	
	int len = v.size();
	
	cout<<len<<endl;
	
	for(int i=0; i<len;i++)
	{
		cout<<v[i]<<" ";
	}
}
