#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[3];
	a[0] = 1, a[1] = 1, a[2] = 2;
	if(n == 1 || n == 2) {
		cout << 1;
		return 0;	
	}
	for(int i = 3; i < n; i++) {
		a[0] = a[1];
		a[1] = a[2];
		a[2] = (a[0] + a[1]) % 10007;
	}
	cout << a[2];
	return 0;
} 
