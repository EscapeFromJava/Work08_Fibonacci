#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int size = 0;
	cout << "Введите номер элемента" << endl;
	cin >> size;
	int* arr = new int [size] {};
	arr[0] = 1;
	arr[1] = 1;
	for (int i = 2; i < size; i++) {
		arr[i] = arr[i-2] + arr[i-1];
	}
	cout << "Элементу " << size << " соответствует цифра = " << arr[size-1] << endl;
	return 0;
}


	
