#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

    vector<double> digits;
    digits.push_back(0);
    digits.push_back(0);
    for(int i = 2; i <= 1000000; i++) {
        double last = digits[i - 1];
        digits.push_back(last + log10(i));
    }

	int i;
    cin >> i;

    while(!cin.eof()) {
        cout << ((i == 0 || i == 1) ? 1 : (int) ceil(digits[i])) << endl;
        cin >> i;
    }

}