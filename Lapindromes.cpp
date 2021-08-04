#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	string a;
	int count=0;
	cin>>a;
	int b = a.length();
	vector<char> v1;
	vector<char> v2;
	if((b%2)==0)
	{
		for(int i=0; i<(b/2); i++)
		v1.push_back(a[i]);
		for(int i=(b-1); i>=(b/2); i--)
		v2.push_back(a[i]);
	}
	else if((b%2)!=0)
	{
		for(int i=0; i<(b/2); i++)
		v1.push_back(a[i]);
		for(int i=(b-1); i>=((b/2)+1); i--)
		v2.push_back(a[i]);
	}
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	int c = v1.size();
	for(int i=0; i<c; i++)
	{
		if(v1[i]==v2[i])
		count++;
	}
	if(count==(b/2))
	cout<<"YES\n";
	else
	cout<<"NO\n";
	}
}
