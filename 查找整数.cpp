#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[1010] = {0};
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int des;
	cin >> des;
	int i;
	for(i = 0; i < n; i++) {
		if(arr[i] == des) {
			cout << i + 1;
			break;
		}
	}
	if(i == n) cout << -1;
	return 0;
} 
