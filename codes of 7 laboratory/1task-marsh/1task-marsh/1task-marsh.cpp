#include <iostream>
#include <string.h>
using namespace std;

struct MARSH { // Структура marsh
    char start[100];
    char end[100];
    unsigned int number;
};

void inputMarsh(MARSH& a) { // Ввод пунктов с клавиатуры
    cout << "Введите начальный пункт: ";
    cin >> a.start;
    cout << "Введите конечный пункт: ";
    cin >> a.end;
    cout << "Введите номер маршрута: ";
    cin >> a.number;
}

void sort(MARSH* a, int n) {  // сортировка методом пузырька
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i; j++) {
            if (a[j].number > a[j + 1].number)
                swap(a[j], a[j + 1]);
        }
    }
}

void outputMarsh(MARSH& a) {  //Вывод на консоль
    cout << "Номер маршрута: " << a.number << endl;
    cout << "Начальный пункт: " << a.start << endl;
    cout << "Конечный пункт: " << a.end << endl;
    cout << endl << endl;
}

void searchInf(MARSH* a, int n) {
    char interestedInf[100];
    cout << "\nВведите пункт, информация о котором вам необходима: ";
    cin >> interestedInf;
    bool checkInf = false;
    for (int i = 0; i < n; i++) {
        if ((!strcmp(a[i].end, interestedInf)) || (!strcmp(a[i].start, interestedInf))) {
            outputMarsh(a[i]);
            checkInf = true;
        }
    }
    if (!checkInf) {
        cout << "Ничего не найдено" << endl;
    }
}


int main(int argc, char* argv[]) {
    system("chcp 1251");
    const char n = 8;  // количество элементов массива
    MARSH marsh_array[n];
    for (int i = 0; i < n; i++)
        inputMarsh(marsh_array[i]);

    sort(marsh_array, n);
    searchInf(marsh_array, n);

}
