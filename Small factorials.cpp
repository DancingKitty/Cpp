#include<bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	cpp_int n;
	cin>>n;
	for(cpp_int i=(n-1); i>=1; i--)
	n=n*i;
	cout<<n<<"\n";
	}
}
