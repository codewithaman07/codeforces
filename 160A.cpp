#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
#ifndef a 
	freopen("input.txt","r",stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin>>n;
	vector<int>arr(n);
	int sum = 0;
	int coinsum = 0;
	for(int i = 0; i<n; i++){
		cin>>arr[i];
		sum+=arr[i];
	}
	sort(arr.begin(), arr.end());
	int i = n-1;
	int ans = 0;
	while(coinsum<=sum/2 && i>=0){
		coinsum+=arr[i];
		ans++;
		i--;
	}
	cout<<ans<<endl;
	return 0;
}