#include <iostream>
#include <algorithm>

using namespace std;

void run_test() {
	int n, k; cin >> n >> k;
	
	int B[n];
	int A[n];
	for (auto& e : A) { cin >> e; }
	for (auto& e : B) { cin >> e; }
	
	sort(A, A + n);

	sort(B, B + n);

	long long mx = 0;
	for (int i = 0; i < 2*n; i++) {
		int price = (i < n ? A[i] : B[i-n]);
		
		int good = n - (lower_bound(A, A + n, price) - A);
		
		int bad = n - (lower_bound(B, B + n, price) - B);

		if ((bad-good) > k) { continue; }

		mx = max((long long)(bad) * price, mx);

	}

	cout << mx << '\n';

}

int main() {
	int t; cin >> t;
	while (t-- != 0) { run_test(); }
}
