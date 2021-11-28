//十六进制转八进制 
#include<iostream>
#include<string>
#include<map>
#include<vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	string hex[16] = {"0000","0001","0010","0011","0100","0101","0110","0111","1000","1001","1010","1011","1100","1101","1110","1111"};
	map<string, string> oct;
	oct["000"] = "0", oct["001"] = "1", oct["010"] = "2", oct["011"] = "3", oct["100"] = "4", oct["101"] = "5", oct["110"] = "6", oct["111"] = "7";
	string bin;
	for(int i = 0; i < n; i++) {
		//十六进制转二进制 
		string s;
		cin >> s;
		for(int j = 0; j < s.length(); j++) {
			int index;
			if(s[j] >= 'A' && s[j] <= 'F') {
				index = s[j] - 'A' + 10;
			}
			else {
				index = s[j] - '0';
			}
			bin += hex[index];
		}
		//cout << bin << endl; //调试代码 
		//二进制转八进制 
		if(bin.length() % 3 == 1) bin = "00" + bin;
		if(bin.length() % 3 == 2) bin = "0" + bin;
		for(int i = 0; i < bin.length(); i+=3) {
			string temp = bin.substr(i, 3);
			if(i == 0 && temp == "000") continue; //可能出现二进制数前三位为"000"的情况，此时不输出，直接跳过 
			string t = oct[temp];
			cout << t;
		}
		cout << endl;
		bin = "";
	}
	return 0;
}
