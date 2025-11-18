#include <iostream>
#include <iomanip>
using namespace std;
const double pi = 3.1415926;
int main() {
	double r, h;
	cout << "===圆锥体积计算===" << endl;
	cout << "请输入高" << endl;
	cin >> h;
	cout << "请输入底面半径" << endl;
	cin >> r;
	double V = (1.0 / 3.0) * h * pi * r * r;
	cout << fixed << setprecision(2);
	cout <<"圆锥体积为:" << V << endl;
	system("pause");
	return 0;
}