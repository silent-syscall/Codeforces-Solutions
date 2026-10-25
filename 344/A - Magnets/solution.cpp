#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <string> current(n);
    cin >> current[0];
    int answer = 1; //We already have a group at the start
    string previous = current[0];
    for(int i = 1; i < n; i++){
        cin >> current[i];
        if(current[i] != previous) answer++;
        previous = current[i];
    }
    cout << answer << "
";
    return 0;
}