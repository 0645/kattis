#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	vector<int> c(n);
	for(int i = 0; i < n; i++)
		cin >> c[i];

	int low = 0;
	int high = n;
	int hindex;
	while(low <= high) {
		int mid = (low + high) / 2;

		int count = 0;
		for(int i = 0; i < n; i++) {
			if(c[i] >= mid)
				count++;
		}

		if(count >= mid) {
			hindex = mid;
			low = mid + 1;
		} else {
			high = mid - 1;
		}
	}

	cout << hindex << endl;

}
