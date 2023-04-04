/* Напишите программу, которая запрашивает текущую численность населения
Земли и текущую численность населения США (или любой другой страны).
Сохраните эту информацию в переменных типа long long. В качестве
результата программа должна отображать процентное соотношение численности
населения США (или выбранной страны) и всего мира. Результат выполнения
программы должен выглядеть следующим образом:
    Enter the world's population: 6898758899
    Enter the population of the US: 310783781
    The population of the US is 4.50492% of the world population.
Можете поискать в Интернете более точные значения. */
#include <iostream>

using namespace std;

int main()
{
    long long population, us_population;
    cout << "Enter the world's population: ";
    cin >> population;
    cout << "Enter the population of the US: ";
    cin >> us_population;
    cout << "The population of the US is " << double(us_population) / double(population) * 100
    << "\% of the world population." << endl;
    return 0;
}
