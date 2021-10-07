#include<bits/stdc++.h>
using namespace std;
int main()
{
	int ns,nq;
	cin>>ns;
	string a[ns];
	for(int i=0; i<ns; i++)
	cin>>a[i];
	cin>>nq;
	string b[nq];
	for(int i=0; i<nq; i++)
	cin>>b[i];
	vector<int> v;
	for(int i=0; i<nq; i++)
	{
		int count=0;
		string t=b[i];
		for(int j=0; j<ns; j++)
		{
			if(a[j]==t)
			count++;
		}
		v.push_back(count);
	}
	int s=v.size();
	for(int i=0; i<s; i++)
	cout<<v[i]<<" ";
}
