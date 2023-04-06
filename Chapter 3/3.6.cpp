/* Напишите программу, которая запрашивает количество миль, пройденных
автомобилем, и количество галлонов израсходованного бензина, а затем
сообщает значение количества миль на галлон. Или, если хотите, программа может
запрашивать расстояние в километрах, а объем бензина в литрах, и выдавать
результат в виде количества литров на 100 километров. */
#include <iostream>

using namespace std;

int main()
{
    int km, litres;
    double consumption;
    cout << "Enter the number of kilometeres traveled: ";
    cin >> km;
    cout << "Enter amount of fuel used (in litres): ";
    cin >> litres;
    consumption = double(litres) / double(km) * 100.0;
    cout << "The consumption is " << consumption << " litres per 100 kilometres." << endl;
    return 0;
}
