/* �������� ���������, ������� ����������� ������� ����������� ���������
����� � ������� ����������� ��������� ��� (��� ����� ������ ������).
��������� ��� ���������� � ���������� ���� long long. � ��������
���������� ��������� ������ ���������� ���������� ����������� �����������
��������� ��� (��� ��������� ������) � ����� ����. ��������� ����������
��������� ������ ��������� ��������� �������:
    Enter the world's population: 6898758899
    Enter the population of the US: 310783781
    The population of the US is 4.50492% of the world population.
������ �������� � ��������� ����� ������ ��������. */
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
