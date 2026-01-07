#include <iostream>
using namespace std;
class Rectangularprism {
private://定义长宽高
	double length;
	double width;
	double height;
public:
	void input() {//定义成员函数
		cin>>length>>width>>height;
	}
	double volume() {//计算体积
		return length * width * height;
	}
	void display() {//定义成员函数
		cout<<volume()<<endl;
	}
};
int main() {
	Rectangularprism r1;
	r1.input();//输入长宽高
	r1.display();//输出体积
	Rectangularprism r2;
	r2.input();
	r2.display(); 
	Rectangularprism r3;
	r3.input();
	r3.display();
	return 0;
}