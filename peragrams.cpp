#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	string str;
    cin >> str;
    
    vector<int> map(26,0);
    for(int i = 0; i < str.size(); i++) {
        map[str[i] - 'a']++;
    }

    int count = -1;
    for(int i = 0; i < 26; i++) {
        if(map[i] % 2) count++;
    }

    cout << (count == -1 ? 0 : count) << endl;

}
