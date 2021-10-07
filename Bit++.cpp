#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a=0;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		string s;
		cin>>s;
		if(s=="++X" || s=="X++")
		a=a+1;
		else if(s=="--X" || s=="X--")
		a=a-1;
	}
	cout<<a;
}
