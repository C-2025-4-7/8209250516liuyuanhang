#include <iostream>
using namespace std;
// 递归求解吃桃问题
int eattaozi(int day,int num) {
	if (day==1) {
		return num;
	}
	else {
		return eattaozi(day-1, (num+1)*2);
	}
}
int main() {
	// 求解吃桃问题
	int day = 10;
	int num = 1;
	cout<< "第一天桃子的数量为" << eattaozi(day,num) << endl;
	return 0;
}