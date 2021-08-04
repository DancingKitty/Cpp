#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,temp,rev=0;
	cin>>n;
	a = n;
	while(n!=0)
	{
		temp=n%10;
		rev=(rev*10)+temp;
		n=n/10;
	}
	if((a*1)==(rev*1))
	cout<<"YES";
	else
	cout<<"NO";
}
