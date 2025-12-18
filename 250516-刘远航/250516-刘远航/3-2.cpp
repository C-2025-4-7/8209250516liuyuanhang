#include <iostream>
using namespace std;
//构建一个函数is_prime(int num)，用于判断一个整数是否为素数。
bool is_prime(int num) {
	int a = 1;
	for (int i = 1; i < num; i++) {
		if (num % i == 0) {
			a = i;
		}
	}
	if(a!=1){
		return true;
	}
	else{
		return false;
	}
}
int main() {
	//输出前200个素数，每行10个。
	int numsize=0;
	for(int i=1;numsize<200;i++){
		if(is_prime(i)){
			cout<<i<<" ";
			numsize++;
			if (numsize % 10 == 0) {
				cout << endl;
			}
		}
	}
	return 0;
}