#include<bits/stdc++.h>
using namespace std;

int maxsubarray(int i, vector<int> &arr,int x, int y,vector<vector<vector<int>>> &dp)
{
    if(i==arr.size())
    return 0;
    if(dp[i][x][y]!=-1)
    return dp[i][x][y];
    if(arr[i]<=x && y>0)
    {
        return dp[i][x][y]= max(1+maxsubarray(i+1,arr,x-arr[i],y,dp), 1+maxsubarray(i+1,arr,x,y-1,dp));
    }
    else if(arr[i]<=x)
    {
        return dp[i][x][y]= 1+maxsubarray(i+1,arr,x-arr[i],y,dp);
    }
    else if(y>0)
    {
       return dp[i][x][y]= 1+maxsubarray(i+1,arr,x,y-1,dp);
    }
    else
    return dp[i][x][y]= 0;
}

int main()
{
    int n,x,y;
    cin >> n >> x >> y;
    vector<int> arr(n);
    for(int i=0 ; i<n ; i++)
    cin >> arr[i];
    vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(x+1,vector<int>(y+1,-1)));
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans = max(ans,maxsubarray(i,arr,x,y,dp));
    }
    cout << ans << endl;
}