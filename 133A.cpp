#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef a 
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	string s;
	cin>>s;
	int n = s.size();
	for(int i = 0; i<n; i++){
		if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
	return 0;
}