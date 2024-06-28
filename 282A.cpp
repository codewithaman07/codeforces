#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef a
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int x = 0;
	int n;
	cin>>n;
	string arr[n];
	for(int i = 0; i<n; i++){
		string str;
		cin>>str;
		if(str == "X++" || str == "++X"){
			x++;
		}
		else{
			x--;
		}
	}
	cout<<x<<endl;
	return 0;
}