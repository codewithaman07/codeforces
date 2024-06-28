#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef a 
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int a[6][6];
	int ans = 0;
	for(int i = 1; i<6; i++){
		for(int j = 1; j<6; j++){
			cin>>a[i][j];
			if(a[i][j] == 1){
				ans = abs(3-i) + abs(3-j);
				cout<<ans<<endl;
			}
		}
	}
	return 0;
}