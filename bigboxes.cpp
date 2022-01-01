#include <bits/stdc++.h>

using namespace std;

bool achievable(vector<int> c, int k, int m) {
	int partitions = 0;
	int start = 0;
	for(int i = 1; i < c.size(); i++) {
		if(c[i] - c[i-1] > m) return false;
		if(c[i] - start > m) {
			if(++partitions >= k) return false;
			start = c[i-1];
		}
	}
	return true;
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int n, k;
	cin >> n >> k;

	int sum = 0;
	vector<int> c;
	c.push_back(0);
	for(int i = 1; i <= n; i++) {
		int temp; cin >> temp;
		c.push_back(temp + c[i-1]);
	}

	int l = 1;
	int r = sum;
	int result = r;

	while(l <= r) {
		int m = (l + r) / 2;
		if(achievable(c, k, m)) {
			result = m;
			r = m - 1;
		} else {
			l = m + 1;
		}
	}

	cout << result << endl;

}
