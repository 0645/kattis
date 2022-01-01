#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
    vector<int> a;
    
    cin >> n;
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }

    long long ssum = 0;
    long long sum = 0;
    vector<long long> square;
    for(int i = 0; i < n; i++) {
        sum += a[i];
        ssum += a[i] * a[i];
        square.push_back(ssum);
    }

    vector<long long> nums;
    nums.push_back(sum);
    for(int i = 1; i < n; i++) {
        nums.push_back(nums[i-1] - a[i-1]);
    }

    long long max = 0;
    for(int i = 1; i < nums.size(); i++) {
        if(max < square[i-1] * nums[i]) max = square[i-1] * nums[i];
    }

    cout << max << endl;

}
