#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	int n,temp,rev=0;
	cin>>n;
	int c = (n*2);
	while(n!=0)
	{
		temp=n%10;
		rev=(rev*10)+temp;
		n=n/10;
	}
	int d = (rev*2);
	if(c==d)
	cout<<"wins\n";
	else
	cout<<"loses\n";
	}
}
