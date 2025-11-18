#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	double f, c;//定义华氏度和摄氏度
	cout << "请输入华氏度" << endl;
	cin >> f;//定义华氏度和摄氏度
	c = 5.0 / 9.0 * (f - 32);//计算摄氏度
	cout << fixed << setprecision(2);//格式化以及设置精度
	cout << "对应的摄氏度是：" << c << endl;//输出摄氏度
	return 0;
}