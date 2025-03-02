#include <iostream>
using namespace std;

double addition_negative(double massive[], int row) {
    double addition = 0;
    for (int i = 0; i < row; i++) {
        if (massive[i] < 0) {
            addition += massive[i];
        }
    }
    return addition;
}

int main() {
    setlocale(LC_ALL, "RUS");
    const int row = 4;
    double massive[row] = { -3.2, 4.5, -0.6, -2.3 };
    cout << "Сумма отрицательных элементов массива {-3.2, 4.5, -0.6, -2.3}: " << addition_negative(massive, row);
}
