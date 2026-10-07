// Problem: A. Watermelon
// Contest: Codeforces - Codeforces Beta Round 4 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/4/A?utm_source=chatgpt.com
// Memory Limit: 64 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
using namespace std;
 
int main(){
	int w;
	cin>>w;
	
	if(w%2==0 && w>2){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}