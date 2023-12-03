#include <iostream>
#include <cmath>
#include <algorithm>

double FindMinElem(double array[], int kt) {
    double Min = array[0];
    int index = 0;
    for (int i = 1; i < kt; i++) {
        if (array[i] < Min) {
            Min = array[i];
            index = i;
        }
    }
    std::cout << "Мiнiмальний елемент масиву " << Min << " пiд номером " << index << std::endl;
    return Min;
}
double FindMinysovi(double array[], int kt) {
    int minysove1 = 0;
    int minysove2 = 0;
    int syma = 0;
    for (int i = 0; i < kt; i++)
    {
        if (array[i] < 0) {
            minysove1 = i;
            break;
        }
    }
    for (int i = minysove1; i < kt; i++)
    {
        if (array[i] < 0) {
            minysove2 = i;
        }
    }
    for (int i = minysove1 + 1; i < minysove2; i++)
    {
        syma += array[i];
    }
    std::cout <<"Сума= " << syma << std::endl;
    return syma;
}

double SortArray(double array[], int kt) {
    int left = 0;
    int right = kt - 1;

    while (left < right) {
        while (std::fabs(array[left]) <= 1 && left < right) {
            left++;
        }

        while (std::fabs(array[right]) > 1 && left < right) {
            right--;
        }

        if (left < right) {
            std::swap(array[left], array[right]);
            left++;
            right--;
        }
    }
    std::cout << "Вiдсортований масив: ";
    for (int i = 0; i < kt; i++) {
        std::cout << array[i] << " ";
    }
    return 0;
}
int main() {
    setlocale(0, ".1251");
    const int kt = 6;
    double array[kt];
    for (int i = 0; i < kt; i++)
    {
        std::cout << "Введiть " << i << " елемент ";
        std::cin >> array[i];

    }
    FindMinElem(array, kt);
    FindMinysovi(array, kt);
    SortArray(array, kt);
    return 0;
}