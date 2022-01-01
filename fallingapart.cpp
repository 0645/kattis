#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int n;
	cin >> n;

	vector<int> a;
	for(int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		a.push_back(temp);
	}

	sort(a.begin(), a.end(), greater<int>());

	int alice = 0;
	int bob = 0;
	for(int i = 0; i < n; i += 2) alice += a[i];
	for(int i = 1; i < n; i += 2) bob += a[i];

	cout << alice << " " << bob << endl;
}
