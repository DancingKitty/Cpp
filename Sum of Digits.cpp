#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,a;
	
	cin>>t;
	
	for(int i=0; i<t; i++)
	{
	    int sum=0;
		cin>>n;
		while(n!=0)
		{
			a=n%10;
			sum=sum+a;
			n=n/10;
		}
		
		cout<<sum<<endl;
	}
	
	
}
