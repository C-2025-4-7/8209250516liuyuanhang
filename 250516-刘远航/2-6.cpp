#include <iostream>
using namespace std;
int main() {
	cout<<"求a和b的最大公约数和最小公倍数"<<endl;
	int a,b,m,n,r;
	cout << "请输入两个正整数a和b的值:";
	cin >> a >> b;
	m = a;
	n = b;
	while (n != 0) {
		r = m % n;
		m = n;
		n = r;
	}
	cout << "最大公约数为:" << m << endl;
	cout << "最小公倍数为:" << a * b / m << endl;
	return 0;
}