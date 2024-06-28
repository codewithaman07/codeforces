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
		vector<int>arr(n);
		for(int i = 0; i<n; i++){
			cin>>arr[i];
		}
		if(arr[0] != 1){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}
