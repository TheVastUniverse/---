#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int m, n;
	cin >> m >> n;
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			cout << char('A' + abs(i - j));
		} 
		cout << endl;
	}
	return 0;
} 
