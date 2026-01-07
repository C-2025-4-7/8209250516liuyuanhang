#include <iostream>
#include "student.h"
using namespace std;
Student::Student() {// 默认构造：给一个合理初值，避免野值
	set_value(0, "noname", 'u');
}
Student::Student(int n, const char* nm, char s) {// 与 main 中 Student stud1(...) 匹配
	set_value(n, nm, s);
}
void Student::set_value(int n, const char* nm, char s) {//成员函数定义
	num = n;
	strncpy_s(name, sizeof(name), nm, _TRUNCATE);
	sex = s;
}
void Student::display() const {//成员函数定义
	cout<<"num: "<<num<<endl;
	cout<<"name: "<<name<<endl;
	cout<<"sex: "<<sex<<endl;
}