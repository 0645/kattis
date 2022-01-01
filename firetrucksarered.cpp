#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	vector<vector<pair<int,int>>> adj_list(n+1);
	unordered_map<int,int> map;

	for(int i = 1; i <= n; i++) {
		int m; cin >> m;
		while(m--) {
			int d; cin >> d;
			if(map.find(d) == map.end()) {
				map[d] = i;
			} else {
				adj_list[i].push_back(make_pair(d, map[d]));
				adj_list[map[d]].push_back(make_pair(d, i));
			}
		}
	}

	queue<int> q;
	vector<bool> visited(n+1);
	vector<int> output;
	int vertex = 1;
	visited[vertex] = true;
	q.push(vertex);

	while(!q.empty()) {
		vertex = q.front(); q.pop();
		for(int i = 0; i < adj_list[vertex].size(); i++) {
			int other = adj_list[vertex][i].second;
			int relate = adj_list[vertex][i].first;
			if(!visited[other]) {
				visited[other] = true;
				output.push_back(vertex);
				output.push_back(other);
				output.push_back(relate);
				q.push(other);
			}
		}
	}

	if(output.size() != 3 * (n - 1)) {
		cout << "impossible" << endl;
	} else {
		for(int i = 0; i < output.size(); i += 3) {
			cout << output[i] << " " << output[i+1] << " " << output[i+2] << endl;
		}
	}
}
