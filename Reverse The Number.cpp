#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	int n,num=0,div;
	cin>>n;
	while(n!=0)
	{
		div=n%10;
		num=(num*10)+div;
		n=n/10;
	}
	cout<<num<<"\n";
	}
}
