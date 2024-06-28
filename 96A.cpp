#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef a 
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int cnt = 1;
	string s;
	cin>>s;
	for(int i = 1; i<s.size(); i++){
		if(s[i-1] == s[i]){
			cnt++;
			if(cnt>=7){
				cout<<"YES"<<endl;
				return 0;
			}
		}
		else{
			cnt = 1;
		}
	}
	if(cnt<7){
		cout<<"NO"<<endl;
	}
	return 0;
}