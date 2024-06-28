#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef a 
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int t,k,n;
	cin>>t;
	while(t--){
		cin>>n>>k;
		vector<int>arr(n);
		for(int i = 0; i<n; i++){
			int temp;
			cin>>temp;
			arr.push_back(temp);
		}
		if(k>1){
			cout<<"YES"<<endl;
		}
		else{
			vector<int>arr2 = arr;
			sort(arr2.begin(), arr2.end());
			if(arr2 == arr){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
	}
	return 0;
}
