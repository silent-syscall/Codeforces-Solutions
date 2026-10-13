#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin >> s;
    int lucky = 0;
    for(int i = 0;i < s.length();i++){
        if (s[i] == '4' || s[i] == '7'){
            lucky++;
        }
        
    }
    
    string count = to_string(lucky);
    bool islucky = true;
    for(int i = 0;i < count.length();i++){
        if(count[i] != '4' && count[i] != '7'){
            islucky = false;
            break;
        }
    }
    cout << (islucky ? "YES" : "NO") << endl;
    return 0;
}