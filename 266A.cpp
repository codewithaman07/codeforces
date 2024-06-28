#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef a 
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
#endif
	int n = 0;
	cin>>n;
	string s;
	cin>>s;
	int cnt = 0;
	for(int i = 0; i<s.size()-1; i++){
		if(s[i] == s[i+1]){
			cnt++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}