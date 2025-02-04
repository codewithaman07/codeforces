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
    string s; cin>>s;
    int n = s.size();
    int x = -1;
    for(int i = 0; i<n; i++){
        if(s[i] == '0'){
            x = i;
            break;
        } 
    }
    if(x == -1){
        cout<<1<<" "<<n<<" "<<1<<" "<<1<<endl;
        return;
    }
    vector<pair<string, pair<int,int>>>v;
    int len = n-x;
    for(int i = 0; i<x; i++){
        string temp;
        for(int j = 0; j<len; j++){
            if(s[i+j] == s[j+x]) temp += '0';
            else temp += '1';
        }
        v.pb({temp,{i+1,i+len}});
    }
    auto it = *max_element(all(v));
    cout<<it.second.first<<" "<<it.second.second<<" "<<1<<" "<<n<<endl;
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