//ʮ����תʮ������ 
#include <iostream>
#include <string>
using namespace std;
int main() {
    int a;
	cin >> a;	//����һ��ʮ���Ƶ��� 
	char b[100];
	if(!a) {	//������������0����ֱ����� 
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
	for(int k = i - 1; k >= 0; k--) { //���������ע������: >=0
		cout << b[k];
	}
	
    return 0;
}
