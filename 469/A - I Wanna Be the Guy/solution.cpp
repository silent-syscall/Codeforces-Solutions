#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int p;
    cin >> p;
    int a[p];
    for(int i = 0; i < p; i++){
        cin >> a[i];
    }
    int q;
    cin >> q;
    int b[q];
     for(int i = 0; i < q; i++){
        cin >> b[i];
}
    bool mark[n+1] = {};
    for(int i = 0; i < p; i++){  
        mark[a[i]] = true;  // For x
    }
    for(int i = 0; i < q; i++){  
        mark[b[i]] = true;  // For y
    }
    bool pass = true;
    for(int i = 1;i <= n;i++){
     if (mark[i] == false){
         pass = false;
         break;
     }
    }
    if(pass) cout << "I become the guy." << '
';
    else cout << "Oh, my keyboard!" << '
';
return 0;
}