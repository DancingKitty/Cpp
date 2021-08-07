#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(((a==b)&&(c==d))||((a==c)&&(b==d))||((a==d)&&(c==b)))
	cout<<"YES\n";
	else
	cout<<"NO\n";
	}
}
