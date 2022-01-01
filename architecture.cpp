#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int R, C;
    cin >> R >> C;

    vector<int> xv;
    vector<int> yv;

    for(int i = 0; i < R; i++) {
        int temp;
        cin >> temp;
        xv.push_back(temp);
    }
    for(int i = 0; i < C; i++) {
        int temp;
        cin >> temp;
        yv.push_back(temp);
    }
    
    int x = *max_element(xv.begin(), xv.end());
    int y = *max_element(yv.begin(), yv.end());

    if(x == y) {
        cout << "possible" << endl;
    } else {
        cout << "impossible" << endl;
    }

}