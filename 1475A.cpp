#include <iostream>
#include <cmath>
using namespace std;

int main() {
    #ifndef a 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    long long t,n;
    cin>>t;
    while(t--){
    	cin>>n;
    	if(n%2 != 0){
    		cout<<"YES"<<endl;
    	}
    	else{
    		int flag = 0;
    		long long div = n;
    		while(div>2){
    			div/=2;
    			if(div & 1){
    				if(n%div == 0)
    				flag = 1;
    				break;
    			}
    		}
    		if(flag){
    			cout<<"YES"<<endl;
    		}
    		else{
    			cout<<"NO"<<endl;
    		}
    	}
    }
    return 0;
}
