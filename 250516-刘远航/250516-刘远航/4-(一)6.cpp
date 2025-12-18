#include <iostream>
#include <cctype>   // tolower, isalpha
using namespace std;

void count(const char s[], int counts[]) {
    // 先清零
    for (int i = 0; i < 26; i++) counts[i] = 0;

    // 遍历字符串
    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char ch = static_cast<unsigned char>(s[i]);
        if (isalpha(ch)) {                 // 只统计字母
            ch = tolower(ch);              // 统一转小写
            counts[ch - 'a']++;
        }
    }
}

int main() {
    cout << "Enter a string: ";

    char s[1000];
    cin.getline(s, 1000);

    int counts[26];
    count(s, counts);

    for (int i = 0; i < 26; i++) {
        if (counts[i] != 0) {
            cout << char('a' + i) << ": " << counts[i] << " times"<<endl;
        }
    }
    return 0;
}
