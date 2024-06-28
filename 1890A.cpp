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
		int arr[n];
		for(int i = 0; i<n; i++){
			cin>>arr[i];
		}
		unordered_map<int,int>mp;
		bool flag = true;
		for(int i = 0; i<n; i++){
			mp[arr[i]]++;
			if(mp.size()>2){
				flag = false;
				break;
			}
		}
		if(mp.size() == 2){
			int f = begin(mp)->second;
			if(f != (n/2) &&  f!=(n+1)/2){
				flag = false;
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
