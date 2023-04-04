/* Напишите короткую программу, которая запрашивает рост в футах и дюймах и
вес в фунтах. (Для хранения этой информации используйте три переменных.)
Программа должна выдать индекс массы тела (body mass index — ВМІ). Чтобы
рассчитать ВМІ, сначала преобразуйте рост в футах и дюймах в рост в дюймах
(1 фут =12 дюймов). Затем преобразуйте рост в дюймах в рост в метрах,
умножив на 0.0254. Далее преобразуйте вес в фунтах в массу в килограммах,
разделив на 2.2. После этого рассчитайте ВМІ, разделив массу в килограммах на
квадрат роста в метрах. Для представления различных коэффициентов
преобразования используйте символические константы. */
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const int inch_in_foot = 12;
    const double inch_to_m = 0.00254;
    const float pound_to_kg = 2.2;
    int foot, inch, weight;
    cout << "Enter your height in foots and inches." << endl;
    cout << "First foots: ";
    cin >> foot;
    cout << "And inches: ";
    cin >> inch;
    cout << "And weight in pounds: ";
    cin >> weight;
    cout << "Your BMI is: " << (weight / 2.2) / (pow(((foot * 12 + inch) * 0.0254), 2)) << endl;
    return 0;
}
