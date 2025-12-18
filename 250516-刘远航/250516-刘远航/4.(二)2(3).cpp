#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "请输入数组元素个数: ";
    cin >> n;
    if (n <= 0) return 0;

    int* p = new int[n];

    cout << "请输入数组元素: ";
    for (int i = 0; i < n; i++) cin >> *(p + i);

    // 动态调试/观察：指针、指针变量地址、指向的值
    cout << "p(堆数组首地址) = " << p << endl;
    cout << "&p(指针变量地址) = " << &p << endl;
    cout << "*p(第1个元素) = " << *p << endl;

    bubbleSort(p, n);

    cout << "排序后数组元素为: ";
    for (int i = 0; i < n; i++) {
        cout << *(p + i) << " ";   // 指针方式输出
    }
    cout << endl;

    delete[] p;
    return 0;
}
