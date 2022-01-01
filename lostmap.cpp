#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	vector<vector<pair<int,pair<int,int>>>> adj_list(n+1);
	vector<int> visited(n+1,0);

	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			int weight; cin >> weight;
			adj_list[i].push_back(make_pair(weight, make_pair(i,j)));
		}
	}

	typedef pair<int,pair<int,int>> PII;
	priority_queue<PII,vector<PII>,greater<PII>> min_heap;
	min_heap.push(adj_list[1][0]);

	while(!min_heap.empty()) {
		PII item = min_heap.top(); min_heap.pop();
	    int weight = item.first;
		int first = item.second.first;
		int second = item.second.second;
		if(!visited[second]) {
			visited[second] = true;
			if(weight != 0) cout << first << " " << second << endl;
			for(auto pair_weight_vertex : adj_list[second])
	   			if(!visited[pair_weight_vertex.second.second])
				   min_heap.push(pair_weight_vertex);
		}
	}

}
