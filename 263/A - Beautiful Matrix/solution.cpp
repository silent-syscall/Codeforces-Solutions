#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int r,c;
    int a[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >> a[i][j];
            if(a[i][j]==1){
                r = i, c = j;
            }
        }
    }
    int vertical_moves = abs(r-2);
    int horizontal_moves = abs(c-2);
    int distance = vertical_moves + horizontal_moves;
    cout<<distance<<endl;
    return 0;
    
}