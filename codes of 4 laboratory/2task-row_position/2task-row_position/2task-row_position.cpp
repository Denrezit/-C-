#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	const int m = 5;
	int mass[6][6] = { {1,1,1,4,2,1},{4,2,1,2,3,2},{5,5,3,4,1,3},{3,2,4,2,1,4},{8,7,2,1,1,5},{1,8,1,2,8,3} };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j <= m; j++) {
			int t = mass[i][j];
			mass[i][j] = mass[m - i][j];
			mass[m - i][j] = t;
		}

	}

	cout << "Изменённая матрица: \n";
	for (int i = 0; i <= m; i++) {
		for (int j = 0; j <= m; j++) {
			cout << mass[i][j];
		}
		cout << endl;
	}
}
