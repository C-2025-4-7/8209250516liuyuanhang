#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "计算每天平均花多少钱买苹果" << endl;

    const double price_per_apple = 0.8;  // 每个苹果的单价

    int days = 0;          // 一共买了多少天
    int today_number = 2;  // 第一天买 2 个
    int total_number = 0;  // 苹果总数
    double total_price = 0.0; // 总花费

    while (total_number + today_number <= 100) {
        total_number += today_number;                 // 累加今天买的苹果数
        total_price += today_number * price_per_apple; // 累加今天花的钱
        ++days;                                       // 天数 +1
        today_number *= 2;                            // 下一天买前一天的 2 倍
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "每天平均花费：" << total_price / days << " 元" << endl;

    return 0;
}
