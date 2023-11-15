// prokofev333.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main() 
{
    setlocale(0, "");
  
    int number;

    cout << "Введите число: ";
    cin >> number;

    if (number > 0) {
        cout << "Число является положительным." << endl;
    }
    else if (number < 0) {
        cout << "Число является отрицательным." << endl;
    }
    else {
        cout << "Число равно нулю." << endl;
    }

    return 0;
}