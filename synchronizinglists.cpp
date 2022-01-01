#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int n;
	cin >> n;
	while(n != 0) {
		vector<int> vec1;
		vector<int> vec2;
		vector<int> orig;

		for(int i = 0; i < n; i++) {
			int temp; cin >> temp;
			vec1.push_back(temp);
			orig.push_back(temp);
		}

		for(int i = 0; i < n; i++) {
			int temp; cin >> temp;
			vec2.push_back(temp);
		}

		sort(vec1.begin(), vec1.end());
		sort(vec2.begin(), vec2.end());

		vector<int> soln(n);
		for(int i = 0; i < n; i++)
			soln[find(orig.begin(), orig.end(), vec1[i]) - orig.begin()] = vec2[i];
		for(int i = 0; i < n; i++)
			cout << soln[i] << endl;
		
		cin >> n;
		if(n != 0) cout << endl;
		else break;
	}
	vector<int> vect = {3, 6, 9, 12, 15};
}