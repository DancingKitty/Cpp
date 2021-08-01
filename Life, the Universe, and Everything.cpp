#include<bits/stdc++.h>
using namespace std;
int main()
{
	int input;
	vector<int> v;
	
	while(true)
	{
		cin>>input;
		v.push_back(input);
		if(input==42)
		{
			break;
		}
	}
	
	int a = v.size();
	
	for(int i=0; i<(a-1); i++)
	{
		cout<<v[i]<<"\n";
	}
}
