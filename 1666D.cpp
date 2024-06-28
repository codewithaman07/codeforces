#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define f(x,n) for(ll i = x ; i<n ; i++) 
#define all(x) x.begin(),x.end()  

void solve() {
    string s,t;
    cin>>s>>t;
    ll n = s.size(), m = t.size();
    ll i = 0, j = 0;
    map<char,int>mp, mp2;
    for(auto it : s){
        mp[it]++;
    }
    for(auto it : t){
        mp2[it]++;
    }
    while(i<n && j<m){
        if(s[i] == t[j]){
            if(mp[s[i]]<mp2[t[j]]){
                break;
            }
            else if(mp[s[i]] == mp2[t[j]]){
                mp2[t[j]]--;
                j++;
            }
        }
        mp[s[i]]--;
        i++;
    }
    if(j == m){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}
