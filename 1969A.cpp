#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	vector<int>v;
	for(int i = 0; i<n; i++){
		int element;
		cin>>element;
		v.push_back(element);
	}
	map<int,int>mp;
	for(int i = 0; i<n; i++){
		mp[v[i]] = i+1;
	}
	for(int i = 0; i<n; i++){
		if(mp[i+1] == v[i]){
			cout<<2<<endl;
			return;	
		}
		
	}
	cout<<3<<endl;
	return;
}
int main(){
#ifndef a 
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int t;
	cin>>t;
	for(int i = 0; i<t; i++){
		solve();
	}
}

