#include <iostream>
using namespace std;
int main() {
	cout << "计算一行字符中英文字母，空格，数字和其他字符的个数" << endl;
	char str[100];
	cout << "请输入一行字符：" << endl;
	cin.getline(str, 100);
	int letter = 0, space = 0, digit = 0, other = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
			letter++;
		}
		else if (str[i] == ' ') {
			space++;
		}
		else if (str[i] >= '0' && str[i] <= '9') {
			digit++;
		}
		else {
			other++;
		}
	}
	cout << "英文字母个数：" << letter << endl;
	cout << "空格个数：" << space << endl;
	cout << "数字个数：" << digit << endl;
	cout << "其他字符个数：" << other << endl;
	return 0;
}