#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
		long n;
		cin>>n;
		long a=n;
		while(n--)
		if (n<0)
		return 1;
		else 
		{
			n=n-1;
			a=a*n;
		}
		cout<<a<<"\n";
    }
}

