#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int a[5];
    int sum=0;
    void input()
    { 
        for(int i=0; i<5; i++)
        cin>>a[i];
    }
    
    int calculateTotalScore()
    {
        for(int i=0; i<5; i++)
        sum=sum+a[i];
        return sum;
    }
};
int main() {
    int n; 
    cin >> n;
    Student *s = new Student[n]; 
    for(int i = 0; i < n; i++)
    s[i].input()
    int kristen_score = s[0].calculateTotalScore();
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score)
        count++;
    }
    cout << count;
}
