#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char c;
    cout << "请输入一个字符：";
    cin >> c;

    if (c >= 'a' && c <= 'z') {
        char upper = toupper(c);
        cout << "对应的大写字母为：" << upper << endl;
    }
    else {
        char next = c + 1;
        cout << "后继字符的 ASCII 码为：" << int(next) << endl;
    }
    return 0;
}
