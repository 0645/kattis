#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int n, M;
    cin >> n >> M;

    vector<int> p;
    vector<int> c;

    for(int i = 0; i < n; i++) {
        int t1, t2;
        cin >> t1 >> t2;
        p.push_back(t1);
        c.push_back(t2);
    }

    long long l = 1;
    long long r = 2147483647;
    long long result;

    while(l <= r) {
        __int128 m = (l + r) / 2;
        __int128 daily = 0;
        __int128 cost = 0;
        for(int i = 0; i < n; i++) {
            if(p[i] * m - c[i] > 0) {
                daily += p[i];
                cost += c[i];
            }
        }
        
        if(daily * m - cost >= M) {
            result = m;
            r = m - 1;
        } else {
            l = m + 1;
        }
    }
    
    cout << result << endl;

}
