#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef a
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int n;
	cin>>n;
	while(n){
		string s;
		cin>>s;
		if(s.size()>10){
			cout<<s[0]+to_string(s.size()-2)+s[s.size()-1]<<endl;
		}
		else{
			cout<<s<<endl;
		}
		n--;
	}
	return 0;
}