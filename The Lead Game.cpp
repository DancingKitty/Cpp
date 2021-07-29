#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int lead = 0;
    int winner = 0;
    int score1=0, score2 = 0;
    while(n--){
        int x, y;
        cin >> x >> y;
        score1 += x;
        score2 += y;
        if(score1 > score2 && score1-score2 > lead){
            lead = score1 - score2;
            winner = 1;
        } 
        else if(score1 < score2 && score2-score1 > lead){
            lead = score2 - score1;
            winner = 2;
        }
    }

    cout << winner << " " << lead << endl;
    return 0;
}
