#include <iostream>
using namespace std;
int main() {
	cout << "对x进行计算" << endl;
	double x;
	double y;
	cin >> x;
	if (x <= 0 && x >= 10) {
		cout << "x的值小于0,无法计算" << endl;
	}
	else {
		if (x > 0 && x < 1) {
			y = 3 - 2 * x;
		}
		else {
			if (x >= 1 && x < 5) {
				y = 2 / (4 * x) + 1;
			}
			else {
				y = x * x;
			}
		}
	}
	cout << "y=" << y << endl;
	return 0;
}