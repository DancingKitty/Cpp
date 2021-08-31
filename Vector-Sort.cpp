#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int input;
	vector<int> v;
	
	cin>>n;
	
	for(int i=0; i<n; i++)
	{
		cin>>input;
	    v.push_back(input);
	}
	
	sort(v.begin(),v.end());
	
	for(int i=0; i<n; i++)
	{
		cout<<v[i]<<" ";
	}
}

