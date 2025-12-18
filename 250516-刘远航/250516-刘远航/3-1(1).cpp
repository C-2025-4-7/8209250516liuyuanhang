#include <iostream>
using namespace std;
//构建函数searchmaxcommonfactor，求两个自然数m和n的最大公因数
int searchmaxcommonfactor(int m, int n, int& max) {

	for (int i = 1; i <= m && i <= n; i++) {
		if (m % i == 0 && n % i == 0) {
			max = i;
		}
	}
	/*或使用辗转相除法
	while(n!=0){
		int r=m%n;
		m=n;
		n=r;
	}
	*/

	return max;
}
int main() {
	//输入两个自然数m和n，调用函数searchmaxcommonfactor，输出最大公因数
	int m, n, max = 1;
	cout << "请输入自然数m和n" << endl;
	cin >> m >> n;
	cout << "最大公因数是：" << searchmaxcommonfactor(m, n, max) << endl;
	return 0;
}