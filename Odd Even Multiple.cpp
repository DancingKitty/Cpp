#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if((n%3)!=0)
	cout<<"-1";
	else if(((n/3)%2)!=0)
	cout<<"1";
	else if(((n/3)%2)==0)
	cout<<"0";
}
