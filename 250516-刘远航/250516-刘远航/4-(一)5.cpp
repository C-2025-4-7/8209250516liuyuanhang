#include <iostream>
using namespace std;

int indexOf(const char s1[], const char s2[]) {
    if (s1 == NULL || s2 == NULL) return -1;
    if (s1[0] == '\0') return 0;

    for (int j = 0; s2[j] != '\0'; j++) {     // 枚举 s2 的起点 j
        int i = 0;
        int k = j;
        while (s1[i] != '\0' && s2[k] != '\0' && s1[i] == s2[k]) {
            i++;
            k++;
        }
        if (s1[i] == '\0') {                  // s1 全部匹配完
            return j;
        }
    }
    return -1;
}

int main() {
    char s1[80], s2[80];

    cout << "Enter the first string: ";
    cin.getline(s1, 80);

    cout << "Enter the second string: ";
    cin.getline(s2, 80);

    int pos = indexOf(s1, s2);

    cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") is " << pos << endl;
    return 0;
}
