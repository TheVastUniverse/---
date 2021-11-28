//十进制转十六进制 
#include <iostream>
#include <string>
using namespace std;
int main() {
    int a;
	cin >> a;	//输入一个十进制的数 
	char b[100];
	if(!a) {	//如果输入的数是0，则直接输出 
		cout << '0';
	}
	int i = 0;
	while(a) {
		if(a % 16 >= 10) {
			b[i++] = a % 16 - 10 + 'A';
		}
		else {
			b[i++] = a % 16 + '0';
		}
		a /= 16;
	}
	for(int k = i - 1; k >= 0; k--) { //倒序输出，注意条件: >=0
		cout << b[k];
	}
	
    return 0;
}
