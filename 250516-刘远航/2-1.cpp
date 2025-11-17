#include <iostream>
using namespace std;
int main() {
	cout << "请输入小写字母" << endl;
	char ch;
	cin >> ch;
	if (ch >= 'a' && ch <= 'z') {
		char upperCh = ch - ('a' - 'A');
		cout << "对应的大写字母是: " << upperCh << endl;
	} else {
		cout << "输入的不是小写字母" << endl;
	}
	return 0;
}