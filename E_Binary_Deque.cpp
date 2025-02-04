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
    int n,s; cin>>n>>s;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int sum = accumulate(all(a),0LL);
    int maxi = 0;
    if(sum == s) cout<<0<<endl;
    else if(sum < s) cout<<-1<<endl;
    else{
        int l = 0, r = 0, maxi = 0, temp = 0;
        while(r<n){
            temp+=a[r];
            while(temp > s){
                temp-=a[l];
                l++;
            }
            if(temp == s) maxi = max(maxi,r-l+1);
            r++;
        }
        cout<<n-maxi<<endl;
    }

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