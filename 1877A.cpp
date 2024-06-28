#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef a 
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int temp;
		int ans = 0;
		for(int i = 0; i<n-1; i++){
			cin>>temp;
			ans+=temp;
		}
		cout<< -(ans)<<endl;
	}
	return 0;
}