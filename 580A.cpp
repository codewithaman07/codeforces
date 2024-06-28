#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef a 
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int cnt = 1;
	int ans = 1;
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	for(int i = 0; i<n-1; i++){
		if(arr[i]<=arr[i+1]){
			cnt++;
			ans = max(ans,cnt);
		}
		else{
			cnt = 1;
		}
	}
	ans = max(ans,cnt);
	cout<<ans<<endl;
	return 0;
}