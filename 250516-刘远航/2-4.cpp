#include <iostream>
using namespace std;
int main() {
cout << "==计算器程序==" << endl;
char op;
double num1, num2;
cout << "请输入运算符（+，-，*，/）：";
cin >> op;
cout << "请输入两个操作数：";
cin >> num1 >> num2;
switch (op) {
case '+':
	cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
	break;
case '-':
	cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
	break;
case '*':
	cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
	break;
case '/':
	if (num2 != 0)
		cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
	else
		cout << "错误：除数不能为零！" << endl;
	break;
default:
	cout << "错误：无效的运算符！" << endl;
	break;
}
	return 0;
}