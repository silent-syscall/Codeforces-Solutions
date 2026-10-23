#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[101];
    int answer[101];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        answer[a[i]] = i;
    }
    for(int i = 1; i <= n; i++){
    cout << answer[i] << " ";
    }
    return 0;
}