#include <iostream>
using namespace std;
//构建函数求两个数的最大公约数
int searchmaxcommondivisor(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}return a;
	/*	可以以引用参数的方式传入max然后使用for (int i = 1; i <= a && i <= b; i++) {
			if (a % i == 0 && b % i == 0) {
				max = i;
			}
		}return max;
	}*/
	//使用辗转相除法
}
//构建函数求两个数的最小公倍数
int searchmincommommultiple(int a, int b, int& g, int& l) {
	g = searchmaxcommondivisor(a, b);
	l = a / g * b;
	return l;
	/*可以使用值传递的方式传入min然后使用for(int i = 1; i <= a * b; i++) {
		if (i % a == 0 && i % b == 0) {
			min = i;
			break;
		}
	}return min;*/
}
int main() {
	//输入两个数m和n
	int m, n, g, l;
	cout << "请输入两个数m和n" << endl;
	cin >> m >> n;
	//调用函数求最大公约数和最小公倍数并输出结果
	cout << "最大公约数为：" << searchmaxcommondivisor(m, n) << endl;
	cout << "最小公倍数为：" << searchmincommommultiple(m, n, g, l) << endl;
	return 0;
}