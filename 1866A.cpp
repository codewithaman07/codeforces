#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef a 
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i<n; i++){
		int temp;
		cin>>temp;
		arr[i] = abs(temp);
	}
	int mini = INT_MAX;
	for(int i = 0; i<n; i++){
		mini = min(mini,arr[i]);
	}
	cout<<mini<<endl;
	return 0;
}