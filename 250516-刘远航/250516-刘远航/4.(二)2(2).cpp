#include <iostream>
using namespace std;

int parseHex(const char* const hexString) {
    if (hexString == nullptr) return 0; // 也可以按要求返回-1等

    int ans = 0;
    for (int i = 0; hexString[i] != '\0'; i++) {
        char c = hexString[i];
        int v;
        // 将字符转换为对应的数值
        if (c >= '0' && c <= '9') v = c - '0';
        else if (c >= 'a' && c <= 'f') v = c - 'a' + 10;
        else if (c >= 'A' && c <= 'F') v = c - 'A' + 10;
        else break; // 遇到非法字符：改成 return -1;
        // 累积结果
        ans = ans * 16 + v;
    }
    return ans;
}

int main() {
    cout << parseHex("A5") << endl;   // 165

    return 0;
}
