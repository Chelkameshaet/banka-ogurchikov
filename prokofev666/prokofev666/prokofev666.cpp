// prokofev666.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int countDigits(int number) 
{
    setlocale(LC_ALL, "RUSSIAN");
    int count = 0;
    number = abs(number);
    do {
        number /= 10;
        count++;
    } while (number != 0);

    return count;
}

int main() {
    int number;

    cout << "Введите число: ";
    cin >> number;

    int digitCount = countDigits(number);
    cout << "Количество цифр в числе: " << digitCount << endl;

    return 0;
}