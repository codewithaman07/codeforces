#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
int main(){

	string s;
	string ans;
	vector<int>nums;
	cin>>s;
	for(int i = 0; i<s.size(); i++){
		if(s[i] != '+'){
			nums.push_back(s[i]-'0');
		}
	}
	sort(nums.begin(), nums.end());
	for(int i = 0; i<nums.size(); i++){
		ans+=to_string(nums[i]);
		if(i!= nums.size()-1){
			ans+='+';
		}
	}
	cout<<ans<<endl;
	return 0;
}

