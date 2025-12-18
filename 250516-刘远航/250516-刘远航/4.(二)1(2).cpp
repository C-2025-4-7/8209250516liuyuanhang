#include <stdio.h>

int main(void) {          // C 语言程序
    int a[] = { 1, 2, 3 };
    int* p, i;

    p = a;                // 数组名 a 在表达式中会“衰变”为首元素地址 &a[0]

    for (i = 0; i < 3; i++) {
        printf("%d, %d, %d, %d\n", a[i], p[i], *(p + i), *(a + i));
    }

    return 0;
}
