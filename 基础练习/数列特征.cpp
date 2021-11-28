#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	int n, sum = 0;
	cin >> n;
	vector<int> a;
	for(int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		a.push_back(temp);
		sum += temp;
	} 
	sort(a.begin(), a.end());
	cout << a.back() << endl << a.front() << endl << sum;
	return 0;
} 
