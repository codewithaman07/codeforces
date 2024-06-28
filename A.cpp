#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef a 
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	string s;
	cin>>s;
	for(int i = 0; i<s.size(); i++){
		char c = s[i];
		if(i == 0 && c>='5' && c<'9'){
			s[i] = '9' + '0' - c;
		}
		else if(c>='5' && i>0){
			s[i] = '9' + '0' - c;
		}
	}
	cout<<s<<endl;
	return 0;
}