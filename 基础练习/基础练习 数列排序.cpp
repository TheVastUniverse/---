#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int n, a;
	vector<int> nums;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> a;
		nums.push_back(a);
	}
	sort(nums.begin(), nums.end());
	cout << nums[0];
	for(int i = 1; i < n; i++) {
		cout << ' ' << nums[i];
	}
	return 0;
}
