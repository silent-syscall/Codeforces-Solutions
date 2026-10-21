#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 0;i < n; i++){
        int a;
        cin >> a;
        sum = sum + a;
    }
    double answer = (double)sum/n;
    cout << fixed << setprecision(12) << answer << endl;
    return 0;
}
 