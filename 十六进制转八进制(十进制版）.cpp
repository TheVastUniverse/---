//ʮ������ת�˽��� 
#include<iostream>
#include<string>
using namespace std;
int main() {
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		//ʮ������תʮ���� 
		string s;
		cin >> s;
		long long sum = 0;
		for(int j = 0; j < s.length(); j++) {
			if(s[j] >= 'A' && s[j] <= 'F') {
				sum = sum * 16 + s[j] - 'A' + 10;
			}
			else {
				sum = sum * 16 + s[j] - '0';
			}
		}
		//ʮ����ת�˽���
		char oct[100000];
		int k = 0;
		if(!sum) {
			cout << '0';
		}
		while(sum) {
			oct[k++] = sum % 8 + '0';
			sum /= 8;
		}
		//�������oct 
		for(int i = k - 1; i >= 0; i--) {
			cout << oct[i];
		}
		cout << endl;
	}
	return 0;
}
