#include <iostream>
#include <string>
using namespace std;
int main(){
    string a,b;
    cin >> a >> b;
    for(int i = 0; i < a.length(); i++){
       a[i] = tolower(a[i]); // tolower() used to make uppercase to lowercase
       b[i] = tolower(b[i]);
       if(a[i] < b [i]){
            cout << -1 << endl;
            return 0; // exits the whole main function
        }
        else if(a[i] > b[i]){
            cout << 1 << endl;
            return 0;
        }
    }
     
    
    cout << 0 << endl;
    return 0;
}