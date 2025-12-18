#include <iostream>
#include "mytemperature.h"
using namespace std;
int main() {
	//调用函数显示结果
	cout << "Celsius" << "\t" << "Fahrenheit" << endl;
	for (double i = 40.0; i >= 31.0; i--) {
		cout << i << "\t" << celsius_to_fah(i) << endl;
	}
	cout << "Fahrenheit" << "\t" << "Celsius" << endl;
	for (double j = 120.0; j >= 30.0; j -= 10) {
		cout << j << "\t" << fahrenheit_to_cels(j) << endl;
	}
	return 0;
}