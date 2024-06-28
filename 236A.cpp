#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef a
	freopen("input.txt", "r",stdin);
	freopen("output.txt", "w", stdout);
#endif
	set<char>sett;
	string s;
	cin>>s;
	for(int i = 0; i<s.size(); i++){
		sett.insert(s[i]);
	}
	if(sett.size() % 2 == 0){
		cout<<"CHAT WITH HER!"<<endl;
	}
	else{
		cout<<"IGNORE HIM!"<<endl;
	}
	return 0;
}