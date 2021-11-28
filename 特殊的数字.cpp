#include<iostream>
using namespace std;
int func(int i) {
	int ge = i % 10, shi = i / 10 % 10, bai = i / 100;
	return ge*ge*ge + shi*shi*shi + bai*bai*bai;
}
int main() {
	for(int i = 100; i < 1000; i++) {
		if(func(i) == i) {
			cout << i << endl;
		}
	}
	return 0;
} 
