#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int T; cin >> T;
	for(int x = 0; x < T; x++) {
		int M, C; cin >> M >> C;
		
		vector<vector<pair<int,int>>> adj_list(C);
		vector<bool> visited(C,0);

		for(int y = 0; y < C * (C - 1) / 2; y++) {
			int i, j, d; cin >> i >> j >> d;
			adj_list[i].push_back(make_pair(d,j));
			adj_list[j].push_back(make_pair(d,i));
		}

		typedef pair<int,int> PII;
		priority_queue<PII,vector<PII>,greater<PII>> min_heap;
		for(int i = 1; i < C; i++) min_heap.push(adj_list[0][i]);
		visited[0] = true;

		int mst_weight = 0;
		while(!min_heap.empty()) {
			PII item = min_heap.top(); min_heap.pop();
			int weight = item.first;
			int other = item.second;
			if(!visited[other]) {
				visited[other] = true;
				mst_weight += weight;
				for(auto pair_weight_vertex : adj_list[other])
					if(!visited[pair_weight_vertex.second])
					min_heap.push(pair_weight_vertex);
			}
		}

		cout << (M - mst_weight - C >= 0 ? "yes" : "no") << endl;
	}

}
