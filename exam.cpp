#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int k;
	cin >> k;

	string a, b;
	getline(cin, a);
	getline(cin, a);
	getline(cin, b);
	int n = a.size();

	vector<vector<int>> dp(n + 1, vector<int> (n+1, 0));
	dp[1][0] = (a[0] != b[0]);
	dp[1][1] = (a[0] == b[0]);

	for(int i = 2; i <= n; i++) {
		dp[i][0] = dp[i-1][0] + (a[i-1] != b[i-1]);
		dp[i][i] = dp[i-1][i-1] + (a[i-1] == b[i-1]);
		for(int j = 1; j <= k && j < i; j++) {
			if(a[i-1] != b[i-1])
				dp[i][j] = max(dp[i-1][j-1], 1 + dp[i-1][j]);
			else
				dp[i][j] = max(dp[i-1][j], 1 + dp[i-1][j-1]);
		}
	}
	cout << dp[n][k] << endl;
}
