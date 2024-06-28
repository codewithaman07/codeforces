#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define pb push_back
#define ff first
#define ss second

const int MOD = 1e9 + 7;

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
        int n; cin>>n;
        vector<int>arr(n);
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        int l_cnt = 0, r_cnt = 0;
        bool flag = false;
        r_cnt = count(arr.begin(), arr.end(), 2);
        for(int k = 0; k<n; k++){
            if(arr[k] == 2){
                l_cnt++;
                r_cnt--;
            }
            if(l_cnt == r_cnt){
                flag = true;
                cout<<k+1<<endl;
                break;
            }
        }
        if(!flag) cout<<-1<<endl;
    }
    
    return 0;
}
