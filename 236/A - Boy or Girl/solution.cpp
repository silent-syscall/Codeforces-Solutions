#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    int distinct = 0;
 
    for (int i = 0; i < s.length(); i++) {
        bool duplicate = false;
 
        for (int j = 0; j < i; j++) {
            if (s[i] == s[j]) {
                duplicate = true;
                break;
            }
        }
 
        if (!duplicate) {
            distinct++;
        }
    }
 
    if (distinct % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
 
    return 0;
}