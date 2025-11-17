#include <iostream>
using namespace std;
int main() {
	cout << "计算每天平均花多少钱买苹果" << endl;
	int days=0;
	int today_number=2;
	int nextday_number=0;
	double total_price=0;
	int total_number=0;
	const double price_per_apple=0.8;
	while (total_number <= 100) {
		nextday_number = today_number * 2;
		total_price += today_number * price_per_apple;
		total_number += today_number;
		today_number = nextday_number;
		days++;
	}
	cout << "每天平均花费：" << total_price / days << "元" << endl;
	return 0;
}