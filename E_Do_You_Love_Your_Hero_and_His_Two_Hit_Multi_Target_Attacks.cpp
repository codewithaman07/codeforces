#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define Aman() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define all(x) x.begin(), x.end()
const int M = 1e9+7;
const int N = 1e6 + 1;

int fun(int k) {
	int l = 0, r = 500;
	while(l < r) {
		int mid = (l+r+1)/2;
		if(mid*(mid-1)/2 > k) r = mid-1;
		else l = mid;
	}
	return l;
}

void solve() {
    int k; cin>>k;
    int x = 0, y = 0;
    vector<pair<int,int>>arr;
    while(k){
        int temp = fun(k);
        for(int i = 0; i<temp; i++){
            arr.pb({x,y++});
        }
        x++;
        k-=(temp*(temp-1))/2;
    }
    cout<<arr.size()<<endl;
    for(auto i:arr){
        cout<<i.first<<" "<<i.second<<endl;
    }
}

signed main() {
    cout << fixed << setprecision(20);
    Aman();

    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}