#include <iostream>
using namespace std;

int main() {
    int arr[10];   // 用来存放输入的10个数（原始数组）
    int num[10];   // 用来存放去重后的数（结果数组）
    int cnt = 0;   // 记录 num 里已经存了多少个“不同的数”

    cout << "Enter ten numbers:" << endl;

    // 读入10个整数到 arr 数组
    for (int k = 0; k < 10; k++) {
        cin >> arr[k];
    }

    for (int i = 0; i < 10; i++) {
        bool distinct = true; // 假设 arr[i] 是不同的（没重复）

        // 将 arr[i] 与它前面的所有元素 arr[0..i-1] 比较
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {   // 如果找到相同的，说明重复了,标记为不是不同的
                distinct = false;     
                break;                
            }
        }

        // 如果 distinct 仍然为 true，说明 arr[i] 没有在前面出现过,把这个不同的数存入结果数组 num,结果数组元素个数 +1
        if (distinct) {
            num[cnt] = arr[i]; 
            cnt++;             
        }
    }

    cout << "The distinct numbers are: ";

    // 只输出 num 里有效的部分（0 到 cnt-1）
    for (int i = 0; i < cnt; i++) {
        cout << num[i] << " ";
    }

    return 0;
}
