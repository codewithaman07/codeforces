#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define ss second

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int arr[n];
        bool flag = true;
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        for (int i = 0; i < n - 1; i++){
            if (arr[i] > arr[i + 1]){
                cout << 0 << endl;
                flag = false;
                break;
            }  
        }
        int mini = INT_MAX;
        if(flag){
            for(int i = 0; i<n-1; i++){
                mini = min(mini, arr[i+1] - arr[i]);
            }
            cout<<((mini/2) + 1)<<endl;
        }
        
    }
    return 0;
}
