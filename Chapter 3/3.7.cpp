/* �������� ���������, ������� ����������� ������ ������� � �����������
����� (���������� ������ �� 100 ��) � ����������� ��� � �����, �������� �
��� � ����� ���� �� ������. �������� ��������, ��� ����� �������������
������ ������ ���������, �������� � ��� ������ (����������/�������)
�������������� ������������ (�������/����������). ������, ��� 100
���������� ������������� 62.14 �����, � 1 ������ ���������� 3.875 �����. �����
�������, 19 ���� �� ������ �������� ����� 12.4 ������ �� 100 ��, � 27 ���� ��
������ � �������� 8.7 ������ �� 100 ��. */
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
