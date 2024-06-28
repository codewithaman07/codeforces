#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef a 
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int n, m;
	cin>>n>>m;
	int ans = 0;
	vector<int>arr;
	for(int i = 0; i<n; i++){
		int num;
		cin>>num;
		if(num<0){
			arr.push_back(num);
		}
	}
	sort(arr.begin(), arr.end());
	int cnt = 0;
	int i = 0;
	while(i<arr.size() && cnt<m){
		ans+=abs(arr[i]);
		cnt++;
		i++;
	}
	cout<<ans<<endl;
	return 0;
}