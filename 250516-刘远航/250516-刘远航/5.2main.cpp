#include <iostream>
#include "student.h"
using namespace std;
int main() {
	Student stud;// 默认构造：会是 0 noname U
	stud.set_value(7, "tcg", 'm');//使用成员函数set_value赋值
	stud.display();
	Student stud1(7, "tcg", 'm');//使用构造函数赋值
	stud1.display();
	return 0;
}