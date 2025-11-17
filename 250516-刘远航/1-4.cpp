#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	unsigned int testUnint = 65534;//0xfffe
	cout << "output in unsigned int  type:" << testUnint << endl;//<<oct;
	cout << "output in char type:" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint)<< endl;//因为65534转为16位有符号short时，二进制表示为1111111111111110，这是负二的补码表示，结果为-2
	cout << "output in int type:" << static_cast<int>(testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex<<testUnint << endl;
	cout << "output in octal format:" << oct << testUnint << endl;
	double num = 12.12;
	cout << dec;
	cout << "original double num:" <<num<< endl;
	cout << "after static_cast<int>(num):" << static_cast<int>(num) << endl;
	system("pause");
	return 0;
}