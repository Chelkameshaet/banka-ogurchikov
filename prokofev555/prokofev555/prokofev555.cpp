// prokofev555.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main() 
{
    setlocale(0, "");
    int arr[] = { 3, 7, 3, 4, 1 };

    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = 0;

    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }

    cout << "Сумма элементов массива: " << sum << endl;

    return 0;
}