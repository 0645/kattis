#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
    vector<int> t;
    vector<int> l;

    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        t.push_back(temp);
    }
    for(int i = 0; i < m; i++) {
        int temp;
        cin >> temp;
        l.push_back(temp);
    }

    sort(t.begin(), t.end(), greater<int>());
    sort(l.begin(), l.end(), greater<int>());

    int count = 0;
    // int j = 0;
    // for(int i = 0; i < m && j < n; j++) {
    //     if(l[i] <= t[j]) {
    //         i++;
    //         count++;
    //     }
    // }
    int i = 0;
    int j = 0;
    while(i < n && j < m) {
        if(t[i] <= l[j]) {
            count++;
            j++;
        }
        i++;
    }

    cout << count << endl;

}
