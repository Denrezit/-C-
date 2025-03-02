#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	const int n = 5;
	int mass[n][n] = { {3,4,1,7,3}, {2,5,5,2,9}, {5,3,1,8,2}, {2,6,1,1,2}, {8,1,1,5,5} };
	int mass_multi = 1;

	for (int i = 0; i < n; i++) {
		for (int j = n - 1; j >= 0; j--) {
			mass_multi *= mass[i][j];
			i += 1;

		}
	}
	cout << "Результат выполнения произведения побочной диагонали: " << mass_multi;
}
