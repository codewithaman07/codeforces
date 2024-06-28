#include<bits/stdc++.h>
using namespace std;
int main(){
// #ifndef a 
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int ans = 0;
	int n;
	cin>>n;
	int arr[n][3];
	for(int i = 0; i<n; i++){
		int cnt = 0;
		for(int j = 0; j<3; j++){
			cin>>arr[i][j];
			if(arr[i][j] == 1){
				cnt++;
			}
		}
		if(cnt>=2){
			ans+=1;
		}
	}
	cout<<ans<<endl;
	return 0;
}