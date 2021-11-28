#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[34][34];
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < i + 1; j++) {
			if(i == j) {
				cout << 1 << endl;
				a[i][j] = 1;
				continue;
			}
			if(j == 0) {
				cout << 1 << " ";
				a[i][j] = 1;
				continue;
			}
			cout << a[i - 1][j - 1] + a[i - 1][j] << " ";
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	return 0;
} 
