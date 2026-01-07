#include <iostream>
using namespace std;
class Student {//创建对象
	public:
		int num;
		int score;
};
void max(Student *p,int n) {//构建寻找最高分的函数
	int maxindex = 0;
	for (int i = 1; i < n; i++) {
		if (p[i].score > p[maxindex].score) {
			maxindex = i;
		}
	}
	cout << "最高分的学号为： " <<p[maxindex].num  << endl;
}
int main() {
	Student a[5];//创建对象数组
	for (int i = 0; i < 5; i++) {
		cin >> a[i].num >> a[i].score;
	}
	max(a, 5);
	return 0;
}