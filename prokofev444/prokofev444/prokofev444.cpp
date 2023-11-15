// prokofev444.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main() 
{
    setlocale(0, "");

    
    int arr[] = { 1, 4, 3, 7, 5 };

    
    int size = sizeof(arr) / sizeof(arr[0]);

   
    int product = 1;

    for (int i = 0; i < size; ++i) {
        product *= arr[i];
    }

    cout << "Произведение элементов массива: " << product << endl;

    return 0;
}