#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		if((i%2)==0)
		{
			cout<<"\n";
			for(int j = ((5*i)+1); j<=((5*i)+5); j++)
			cout<<j<<" ";
		}
		else if((i%2)!=0)
		{
			cout<<"\n";
			for(int j = ((5*i)+5); j>=((5*i)+1); j--)
			cout<<j<<" ";
		}
	}
}
