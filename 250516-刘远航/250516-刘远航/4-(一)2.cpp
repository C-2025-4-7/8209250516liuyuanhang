#include <iostream>
using namespace std;
void bubbleSort(double list[], int listSize)
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < listSize - 1; j++)
			if (list[j] > list[j + 1])
			{
				double temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
				changed = true;
			}
	} while (changed);
}
int main() {
	double list[10];
	for (int i = 0; i < 10; i++) {
		cout << "Enter number " << (i + 1) << ": ";
		cin >> list[i];
	}
	bubbleSort(list, 10);
	cout << "Sorted numbers: ";
	for (int i = 0; i < 10; i++) {
		cout << list[i] << " ";
	}
	return 0;
}