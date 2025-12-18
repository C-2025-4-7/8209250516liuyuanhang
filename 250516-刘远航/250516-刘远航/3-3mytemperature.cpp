#include <iostream>
#include "mytemperature.h"
using namespace std;
//函数定义写在CPP文件mytemperature.cpp中
double celsius_to_fah(double cel) {
	return cel * 9.0 / 5.0 + 32.0;
}
double fahrenheit_to_cels(double fah) {
	return (fah - 32.0) * 5.0 / 9.0;
}
