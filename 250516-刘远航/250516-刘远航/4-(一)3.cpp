#include <iostream>
using namespace std;
int main() {
	//初始化柜子状态数组，false表示关闭，true表示开着
	bool arr[101] = {};
	for (int i = 1; i <= 100; i++) {
		for (int j=i; j <= 100; j +=i) {//每第i个柜子状态取反
			arr[j] = !arr[j];
		}
	}
	// 输出开着的柜子号码
	cout << "开着的柜子号码为:"  ;
	for (int i = 1; i <= 100; i++) {
		if (arr[i]) {
			cout << i << " ";
		}
	}

	return 0;
}