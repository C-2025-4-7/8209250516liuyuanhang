#include <iostream>
using namespace std;
int main() {
	cout << "char length:" << '\t' << sizeof(char) << endl;
	cout << "int length:" << '\t' << sizeof(int) << endl; 
	cout << "short length:" << '\t' << sizeof(short) << endl; 
	cout << "long length:" << '\t' << sizeof(long) << endl;
	cout << "float length:" << '\t' << sizeof(float) << endl;
	cout << "double length:" << '\t' << sizeof(double) << endl;
	cout << "long double length:" << '\t' << sizeof(long double) << endl;
	cout << "wchar_t length:" << '\t' << sizeof(wchar_t) << endl;
	return 0;
}