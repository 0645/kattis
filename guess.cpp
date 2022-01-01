#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int low = 1;
	int high = 1000;

	while(low <= high) {

		int guess = (low + high) / 2;
		cout << guess << endl;

		string response;
		cin >> response;

		if(response == "lower")
			high = guess - 1;
		else if(response == "higher")
			low = guess + 1;
		else
			break;
	}

}
