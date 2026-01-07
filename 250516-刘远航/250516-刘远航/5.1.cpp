#include <iostream>
using namespace std;
class Time {
private://定义数据成员
	int hour;
	int minute;
	int second;
public://定义成员函数
	void input() {
		cin>> hour >> minute >> second;
	}
	void output()const {
		cout << hour << ":" << minute << ":" << second << endl;
	}
};
int main() {
	Time t1;//创建对象
	t1.input();
	t1.output();
	return 0;
}