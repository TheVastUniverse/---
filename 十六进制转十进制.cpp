//ʮ������תʮ���� 
#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	cin >> s; //����һ��ʮ�����Ƶ��� 
	long long sum = 0;
	for(int i = 0; i < s.length(); i++) {
		if(s[i] >= 'A' && s[i] <= 'F') {
			sum = sum * 16 + s[i] - 'A' + 10; //��=����+=���ǵó�16
		}
		else{
			sum = sum * 16 + s[i] - '0'; //��=����+=���ǵó�16
		}
	}
	cout << sum; 
	return 0;
}
