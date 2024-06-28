#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef a 
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int a,b,c;
	cin>>a>>b>>c;
	int mini = min({a,b,c});
	int maxi = max({a,b,c});
	cout<<maxi-mini<<endl;
}