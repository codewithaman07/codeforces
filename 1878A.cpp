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
		int n,k;
		cin>>n>>k;
		bool flag = false;
		int arr[n];
		for(int i = 0; i<n; i++){
			cin>>arr[i];
			if(arr[i] == k){
				flag = true;
			}
		}
		if(flag){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}	
	return 0;
}

