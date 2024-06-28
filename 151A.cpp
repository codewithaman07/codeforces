#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef a 
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int drink = ((k*l)/nl)/n;
	int slice = (c*d)/n;
	int salt = (p/np)/n;
	int ans = min({drink,slice,salt});
	cout<<ans<<endl;
	return 0;
}