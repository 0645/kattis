#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

    long long mod = 1000000007;

    int t; cin >> t;
    while(t--) {
        int r, c;
        cin >> r >> c;
        long long count = 18;
        for(int i = 1; i < r; i++) count = (count * 6) % mod;
        for(int i = 1; i < c; i++) count = (count * 6) % mod;
        for(int i = 1; i < r; i++)
        for(int i = 1; i < c; i++)
        count = (count * 2) % mod;
        cout << count << endl;
    }

}