/* Напишите программу, в которой функция main() вызывает определяемую
пользователем функцию, принимающую в качестве аргумента значение
температуры по Цельсию и возвращающую эквивалентное значение температуры по
Фаренгейту. Программа должна выдать запрос на ввод значения по Цельсию и
отобразить следующий результат:
    Please enter a Celsius value: 20
    20 degrees Celsius is 68 degrees Fahrenheit.
Вот формула для этого преобразования:
Температура в градусах по Фаренгейту =
1,8 *
Температура в градусах по Цельсию + 32 */
#include <iostream>

using namespace std;
double CelsToFahr(double c);
int main()
{
    double cels;
    double fahr;
    cout << "Enter the temperature in celsius: " << endl;
    cin >> cels;
    fahr = CelsToFahr(cels);
    cout << cels << " celsius = " << fahr << " fahrenheit" << endl;
    return 0;
}
double CelsToFahr(double c)
{
    return 1.8 * c + 32;
}
