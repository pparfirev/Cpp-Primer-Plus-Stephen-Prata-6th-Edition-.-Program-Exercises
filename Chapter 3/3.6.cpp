/* �������� ���������, ������� ����������� ���������� ����, ����������
�����������, � ���������� �������� ���������������� �������, � �����
�������� �������� ���������� ���� �� ������. ���, ���� ������, ��������� �����
����������� ���������� � ����������, � ����� ������� � ������, � ��������
��������� � ���� ���������� ������ �� 100 ����������. */
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
