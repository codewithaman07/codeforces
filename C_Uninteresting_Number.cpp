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
    string s; cin >> s;
    int n = s.size();
    int two = 0, three = 0, sum = 0;
    f(0,n) {
        sum += s[i] - '0';
        if(s[i] == '2') two++;
        else if(s[i] == '3') three++;
    }
    if(sum%9 == 0){
        cout<<"YES"<<endl;
        return;
    }
    for(int i = 0; i<=min(two,9LL); i++){
        for(int j = 0; j<=min(three,9LL); j++){
            if((sum + 2*i + 6*j)%9 == 0){
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;
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