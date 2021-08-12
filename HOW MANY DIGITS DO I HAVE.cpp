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
	int b = v.size();
	if(b==1)
	cout<<"1";
    else if(b==2)
	cout<<"2";
	else if(b==3)
	cout<<"3";
	else if(b>3)
	cout<<"More than 3 digits";
}
