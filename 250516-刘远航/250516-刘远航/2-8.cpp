#include <iostream>
#include <cmath>      // fabs
#include <iomanip>    
using namespace std;

int main() {
    cout << "用迭代法求 a 的平方根" << endl;

    double a;
    cout << "请输入 a 的值：";
    cin >> a;

    if (a < 0) {
        cout << "暂不处理负数的平方根（无实数解）。" << endl;
        return 0;
    }
    if (a == 0) {
        cout << "a 的平方根约为：0" << endl;
        return 0;
    }

    double x0 = a;          //定义初始值
    double x1;
    const double eps = 1e-5;  //满足精度要求

    while (true) {
        x1 = 0.5 * (x0 + a / x0);  
        if (fabs(x1 - x0) < eps) { // fabs 用于 double 的绝对值
            break;
        }
        x0 = x1;
    }

    cout.setf(ios::fixed);
    cout.precision(6);
    cout << "a 的平方根约为：" << x1 << endl;

    return 0;
}



