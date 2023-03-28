/* Напишите программу, которая предлагает пользователю ввести свой возраст.
Затем программа должна отобразить возраст в месяцах:
    Enter your age: 29
    Your age in months is 348. */
#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Enter you age: ";
    cin >> age;
    cout << "Your age in month is " << age * 12 << " month(s)";
    return 0;
}
