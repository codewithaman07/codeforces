#include<bits/stdc++.h>
#include<algorithm>
#include<cctype>
using namespace std;
int main(){
#ifndef a 
	freopen("input.txt", "r",stdin);
	freopen("output.txt", "w",stdout);
#endif

	string s1;
	cin>>s1;
	transform(s1.begin(), s1.end(), s1.begin(), [](unsigned char c) {return tolower(c);});

	string s2;
	cin>>s2;
	transform(s2.begin(),s2.end(), s2.begin(), [](unsigned char c){ return tolower(c);});
	int i = 0;
	while(i<s1.size()){
		if(s1[i]>s2[i]){
			cout<<"1"<<endl;
			return 0;
		}
		else if(s1[i] < s2[i]){
			cout<<"-1"<<endl;
			return 0;
		}
		else{
			i++;
		}
	}
	cout<<"0"<<endl;
	return 0;
}