#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        if(n != 5) {
            cout << "NO" << "
";
            continue;
    }
        sort(s.begin() , s.end());
        if(s == "Timru") cout << "YES" << "
";
        else cout << "NO" << "
";
    }
    return 0;
} 