#include<bits/stdc++.h>
using namespace std;

int binarysearch(int a[],int n,int k)
{
	int start=0,end=n-1;
	while(start<=end)
	{
		int mid=(start+end)/2;
		if(k==a[mid]) return mid;
		else if(k>a[mid]) start=mid+1;
		else if(k<a[mid]) end=mid-1;
 	}
 	return -1;
}

int main()
{
	int n,k;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
	cin>>a[i];
	cin>>k;
	int index=binarysearch(a,n,k);
	cout<<index;
}
