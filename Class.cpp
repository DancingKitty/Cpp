#include<bits/stdc++.h>
using namespace std;

class student
{
    public:
     int age;
     string first_name;
     string last_name;
     int std;
};

int main()
{
    student pict;
    cin>>pict.age>>pict.first_name>>pict.last_name>>pict.std;
    cout<<pict.age<<endl;
    cout<<pict.last_name<<", "<<pict.first_name<<endl;
    cout<<pict.std<<endl;
    cout<<""<<endl;
    cout<<pict.age<<","<<pict.first_name<<","<<pict.last_name<<","<<pict.std<<endl;
}
