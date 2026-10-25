#include <bits/stdc++.h>
using namespace std;
int main(){
    int  t;
    cin >> t;
    while (t--){
    string s;
    cin >> s;
    int a = s[0] - '0';
    int answer = (a-1)*10;       
        
    if(s.length() == 1) answer += 1;
    else if(s.length() == 2) answer +=3;
    else if(s.length() == 3) answer +=6;
    else if(s.length() == 4) answer +=10;
    cout << answer << "
";
    
    }
    return 0;
}