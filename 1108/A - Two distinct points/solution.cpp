#include <bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin >> q;
    while(q--){
    int l1,r1,l2,r2;
    cin >> l1 >> r1 >> l2 >> r2;
    
    int a = l1;
    int b = l2;
    if(a == b){
        a++;
    }
    cout << a << " " << b << "
";
}
 
return 0;
}