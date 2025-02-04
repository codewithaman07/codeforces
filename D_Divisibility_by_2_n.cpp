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

int fun(int n){
    int cnt = 0;
    while(n%2 == 0){
        n/=2;
        cnt++;
    }
    return cnt;
}

void solve() {
    int n,cnt = 0; cin>>n;
    vector<int>arr(n);
    for(int i = 0; i<n; i++) cin>>arr[i];
    vector<int>temp(n), idx(n);
    for(int i = 0; i<n; i++){
        temp[i] = fun(arr[i]);
        cnt+=temp[i];
    }
    for(int i = 0; i<n; i++) idx[i] = fun(i+1);
    sort(all(idx), greater<int>());
    int ans = 0;
    for(int num : idx){
        if(cnt<n) cnt+=num, ans++;
        else break;
    }
    if(cnt<n) cout<<-1<<endl;
    else cout<<ans<<endl;
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