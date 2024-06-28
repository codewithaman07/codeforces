#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef a 
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int n;
	int ans = 0;
	cin>>n;
	for(int i = 0; i<n; i++){
		string s;
		cin>>s;
		if(s == "Tetrahedron"){
			ans+=4;
		}
		else if(s == "Cube"){
			ans+=6;
		}
		else if(s == "Octahedron"){
			ans+=8;
		}
		else if(s == "Dodecahedron"){
			ans+=12;
		}
		else{
			ans+=20;
		}
	}
	cout<<ans<<endl;
	return 0;
}
