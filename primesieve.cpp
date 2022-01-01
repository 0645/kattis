#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

    int n, q;
    cin >> n >> q;

    vector<bool> is_prime(n+1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }

    int count = 0;
    for(int i = 0; i < n+1; i++) {
        if(is_prime[i]) count++;
    }
    cout << count << endl;

    for(int i = 0; i < q; i++) {
        int x;
        cin >> x;
        if(is_prime[x]) cout << 1 << endl;
        else cout << 0 << endl;
    }

}