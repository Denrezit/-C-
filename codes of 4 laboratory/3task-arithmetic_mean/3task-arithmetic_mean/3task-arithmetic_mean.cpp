#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	const int row = 4;
	const int col = 3;
	int mass[row][col] = { {1,3,1}, {6,6,6}, {2,10,1}, {4,5,6} };
	double average[row] = { 0 };

	for (int i = 0; i < row; i++) {
		double Sum = 0;
		for (int j = 0; j < col; j++) {
			Sum += mass[i][j];
		}
		average[i] = Sum / col;
	}

	cout << "Одномерный массив со средними арифметическими значениями: \n";
	for (int i = 0; i < row; i++) {
		cout << average[i] << " ";
	}
}
