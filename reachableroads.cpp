#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int n; cin >> n;
	while(n--) {
		int m, r;
		cin >> m >> r;

		vector<vector<int>> adj_list(m);
		vector<bool> visited(m, false);

		for(int i = 0; i < r; i++) {
			int x, y;
			cin >> x >> y;
			adj_list[x].push_back(y);
			adj_list[y].push_back(x);
		}

		int count = -1;
		for(int i = 0; i < m; i++) {
			if(!visited[i]) {
				visited[i] = true;
				count++;
				queue<int> q;
  				q.push(i);
				while(!q.empty()) {
					int u = q.front();
					q.pop();
					for (int i = 0; i < adj_list[u].size(); i++) {
						if (!visited[adj_list[u][i]]) {
							q.push(adj_list[u][i]);
							visited[adj_list[u][i]] = true;
						}
					}
				}
			}
		}
		cout << count << endl;
	}

}
