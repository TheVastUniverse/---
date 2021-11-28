//十六进制转十进制 
#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	cin >> s; //输入一个十六进制的数 
	long long sum = 0;
	for(int i = 0; i < s.length(); i++) {
		if(s[i] >= 'A' && s[i] <= 'F') {
			sum = sum * 16 + s[i] - 'A' + 10; //是=不是+=，记得乘16
		}
		else{
			sum = sum * 16 + s[i] - '0'; //是=不是+=，记得乘16
		}
	}
	cout << sum; 
	return 0;
}
