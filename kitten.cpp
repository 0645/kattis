#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int K; cin >> K;
	vector<vector<int>> adj_list(101);

	string line;
	getline(cin, line);
	while(line != "-1") {
		stringstream stream(line);
		int a, b; stream >> a;
		while(stream >> b) {
			adj_list[b].push_back(a);
		}
		getline(cin, line);
	}

	int i = K; cout << i;
	while(adj_list[i].size()) {
		cout << " " << adj_list[i][0];
		i = adj_list[i][0];
	}

	cout << endl;

}
