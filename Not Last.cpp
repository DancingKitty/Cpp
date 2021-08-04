#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,temp;
	cin>>n;
	vector<int> v;
	while(n!=0)
	{
		temp=n%10;
		n=n/10;
		v.push_back(temp);
	}
	if(v[1]==7)
	cout<<"1";
	else
	cout<<"0";
}
