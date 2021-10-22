#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
		int n,c,temp;
		cin>>n;
		vector<int> v;
		while(n!=0)
		{
			temp=n%10;
			v.push_back(temp);
			n=n/10;
		}
		c=v.size();
		cout<<(v[0]+v[c-1])<<"\n";
	}	
}

