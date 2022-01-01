#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	vector<int> table(31);
	table[0] = 1;
	table[1] = 2;
	table[2] = 3;

	for(int i = 3; i <= 30; i++) {
		if(i % 2 == 0)
			table[i] = table[2] * table[i-2] + table[i-3];
		else
			table[i] = 2 * table[i-1] + table[i-2];
	}

	int n;
	while(cin >> n && n != -1) {
		if(n % 2 == 0) cout << table[n] << '\n';
		else cout << 0 << '\n';
	}

}
