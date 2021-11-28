#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for(int i = 1; i < 10; i++) { //五位数 
		for(int j = 0; j < 10; j++) {
			for(int k = 0; k < 10; k++) {
				if(i + i + j + j + k == n) {
					cout << i << j << k << j << i << endl;
				}
			}
		}
	}
	for(int i = 1; i < 10; i++) { //六位数 
		for(int j = 0; j < 10; j++) {
			for(int k = 0; k < 10; k++) {
				if(i + i + j + j + k + k == n) {
					cout << i << j << k << k << j << i << endl;
				}
			}
		}
	}
	
	return 0;
} 
