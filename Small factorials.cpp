#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	cin>>n;
	vector<int> v;
	int b=n;
	while(n--)
	{
		v.push_back(n);
		if(n==0)
		break;
	}
	int a=v.size();
	for(int i=0; i<(a-1); i++)
	b=b*v[i];
	cout<<b;
    }
}
