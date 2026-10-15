#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(int i = 0;i < s.length();i++){
       char d = tolower(s[i]);
        
        if(d == 'a' || d == 'o' || d == 'y' || d == 'e' || d == 'u' || d == 'i'){
            continue;
        }
        else{
            cout << '.' << d;
        }
        
    }
    return 0;
}