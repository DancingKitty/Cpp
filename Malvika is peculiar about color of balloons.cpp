#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	string s;
	int counta=0,countb=0;
	cin>>s;
	int c = s.size();
	for(int i=0; i<c; i++)
	{
		if(s[i]=='a')
		counta++;
		else if(s[i]=='b')
		countb++;
	}
	if(counta==countb)
	cout<<counta<<"\n";
	else if(counta==0 || countb==0)
	cout<<"0\n";
	else if(counta>countb)
	cout<<countb<<"\n";
	else if(countb>counta)
	cout<<counta<<"\n";
	}
}
