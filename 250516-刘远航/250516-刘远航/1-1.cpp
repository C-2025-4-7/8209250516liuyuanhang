#include <iostream>
using namespace std;

int main() {
    int k = 1;         // 先定义并初始化 k
    int i = k + 1;     // 正确使用已定义变量 k

    cout << i++ << endl;   // 输出 2，再自增为 3
    cout << i++ << endl;   // 输出 3，再自增为 4
    cout << "Welcome to C++" << endl;

    return 0;
}
