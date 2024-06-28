#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
#ifndef a 
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int n, m;
	cin>>n>>m;
	vector<int>arr(m);
	for(int i = 0; i<m; i++){
		cin>>arr[i];
	}
	sort(arr.begin(),arr.end());
	int ans = INT_MAX;
	int i = 0;
	int j = n-1;
	while(j<m){
		int diff = arr[j]-arr[i];
		if(ans > diff){
			ans = diff;
		}
		i++;
		j++;
	}
	cout<<ans<<endl;
	return 0;
}