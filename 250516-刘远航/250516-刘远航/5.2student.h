class Student{
private:
	int num;
	char name[20];
	char sex;
public:
	Student();
	Student(int n, const char* nm, char s);
	void set_value(int n, const char* nm, char s);// 新增：赋初值
	void display() const;// 输出
};
