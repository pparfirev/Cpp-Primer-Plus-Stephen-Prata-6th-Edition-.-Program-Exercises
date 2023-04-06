/* Напишите программу, которая запрашивает расход бензина в европейском
стиле (количество литров на 100 км) и преобразует его в стиль, принятый в
США — число миль на галлон. Обратите внимание, что кроме использования
других единиц измерений, принятый в США подход (расстояние/топливо)
противоположен европейскому (топливо/расстояние). Учтите, что 100
километров соответствуют 62.14 милям, а 1 галлон составляет 3.875 литра. Таким
образом, 19 миль на галлон примерно равно 12.4 литров на 100 км, а 27 миль на
галлон — примерно 8.7 литров на 100 км. */
#include <iostream>

using namespace std;

int main()
{
    float eu_consumption, us_consumption;
    cout << "Enter the consumption in liters per 100 km: ";
    cin >> eu_consumption;
    us_consumption = 62.14 / (eu_consumption / 3.875);
    cout << "Consumption " << eu_consumption << " liters per 100 km equal " << us_consumption
    << " miles per one gallon" << endl;
    return 0;
}
