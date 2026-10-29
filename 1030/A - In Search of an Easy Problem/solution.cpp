#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    bool is_hard = false;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(a == 1){
            is_hard = true;
        }
        
    }
    if(is_hard) cout << "HARD" << "
";
    else cout << "EASY" << "
";
    return 0;
    
}
    