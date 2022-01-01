#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	while(true) {

		int n, b;
		cin >> n >> b;
		if(n == -1 && b == -1) break;

		vector<int> a(n);
		for(auto& pop : a) cin >> pop;

		int l = 1;
		int r = *max_element(a.begin(), a.end());
		int result = r;

		while(l <= r) {
			int m = (l + r) / 2;
			int need = 0;
			for(int i = 0; i < n; i++) need += (int) ceil(a[i] / (double) m);

			if(need <= b) {
				result = m;
				r = m - 1;
			} else {
				l = m + 1;
			}
		}

		cout << result << endl;
	}

}
