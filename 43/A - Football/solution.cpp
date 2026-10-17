#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string team[n];
    int goalsA = 0, goalsB = 0;
    
    for(int i = 0; i < n; i++){
            cin >> team[i];
 
    }
    string teamA = team[0],teamB;
    for(int i = 0; i < n; i++){
        if(team[i] == teamA){
        goalsA++;
        }       
        else
        {
         teamB = team[i];
         goalsB++;
        }
    }
    if(goalsA > goalsB) cout << teamA;
    else cout << teamB;
    return 0;
}