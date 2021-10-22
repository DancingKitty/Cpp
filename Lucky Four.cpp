#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
		int n,temp,count=0;
		cin>>n;
		vector<int> v;
		while(n!=0)
		{
			temp=n%10;
			v.push_back(temp);
			n=n/10;
		}
		int c=v.size();
		for(int i=0; i<c; i++)
		{
			if(v[i]==4)
			count++;
		}
		cout<<count<<"\n";
	}
}
