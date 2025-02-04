#include <bits/stdc++.h>
using namespace std;

#define Aman() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define f(x,n) for(int i = x ; i<n ; i++)
#define all(x) x.begin(),x.end()
const int M = 1e9+7;
const int N = 1e6 + 1;


void solve() {
	int n,m, ans = 0, sum = 0; cin>>n>>m;
	vector<vector<int>>arr(m, vector<int>(n));
	for(int j = 0; j<n; j++){
		for(int i = 0; i<m; i++){
			cin>>arr[i][j];
		}
	}
	for(auto &v : arr){
		sort(all(v));
		for(int i = 0; i<n; i++){
			ans+=(v[i]*i)-sum;
			sum+=v[i];
		}
		sum = 0;
	}
	cout<<ans<<endl;
}

signed main() {
	Aman();

	int tc = 1;
	cin >> tc;
	while (tc--) {
		solve();
	}
	return 0;
}

