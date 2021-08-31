#include<bits/stdc++.h>
using namespace std;

struct student
{
	int age;
	string first_name;
	string last_name;
	int std;
};

int main()
{
	student pict;
	cin>>pict.age>>pict.first_name>>pict.last_name>>pict.std;
	cout<<pict.age<<" "<<pict.first_name<<" "<<pict.last_name<<" "<<pict.std<<endl;
}

