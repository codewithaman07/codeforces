#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef a 
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	long long t,n,x;
	cin>>t;
	while(t--){
		cin>>n>>x;
		long long arr[n];
		long long ans = 0;
		long long prev = 0;
		for(long long i = 0; i<n; i++){
			cin>>arr[i];
			ans = max(ans,arr[i]-prev);
			prev = arr[i];
		}
		cout<<max(ans,2*(x-prev))<<endl;
	}
	return 0;
}
