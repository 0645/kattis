#include <bits/stdc++.h>

using namespace std;

int difference(string first, string second) {
	int count = 0;
	for(int i = 0; i < first.size(); i++) {
		if(first[i] != second[i])
			count++;
	}
	return count;
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	vector<vector<pair<int,pair<int,int>>>> adj_list(n);
	vector<int> visited(n,0);

	vector<string> samples;
	string flush;
	getline(cin, flush);
	for(int i = 0; i < n; i++) {
		string sample;
		getline(cin, sample);
		samples.push_back(sample);
	}

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			adj_list[i].push_back(make_pair(difference(samples[i],samples[j]), make_pair(i,j)));
		}
	}

	typedef pair<int,pair<int,int>> PII;
	int mst_weight = 0;
	priority_queue<PII,vector<PII>,greater<PII>> min_heap;
	min_heap.push(adj_list[0][0]);
	vector<int> output;

	while(!min_heap.empty()) {
		PII item = min_heap.top(); min_heap.pop();
	    int weight = item.first;
		int first = item.second.first;
		int second = item.second.second;
		if(!visited[second]) {
			visited[second] = true;
			mst_weight += weight;
			if(first != second) {
				output.push_back(first);
				output.push_back(second);
			}
			for(auto pair_weight_vertex : adj_list[second])
	   			if(!visited[pair_weight_vertex.second.second])
				   min_heap.push(pair_weight_vertex);
		}
	}

	cout << mst_weight << endl;
	for(int i = 0; i < output.size(); i += 2) {
		cout << output[i] << " " << output[i+1] << endl;
	}

}
