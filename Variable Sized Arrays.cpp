#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,len,input,p,q,m;
	vector<vector<int>> vec;
	cin>>n>>m;
	
	for(int i=0; i<n; i++)
	{
		cin>>len;
		vector<int> nvec;
		
		for(int j=0; j<len; j++)
		{
			cin>>input;
			nvec.push_back(input);
		}
		
		vec.push_back(nvec);
	}
	
	
	for(int k=0; k<m; k++)
	{
		cin>>p>>q;
		cout<<vec[p][q]<<endl;
	}

}
