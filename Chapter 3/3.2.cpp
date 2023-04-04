/* �������� �������� ���������, ������� ����������� ���� � ����� � ������ �
��� � ������. (��� �������� ���� ���������� ����������� ��� ����������.)
��������� ������ ������ ������ ����� ���� (body mass index � �̲). �����
���������� �̲, ������� ������������ ���� � ����� � ������ � ���� � ������
(1 ��� =12 ������). ����� ������������ ���� � ������ � ���� � ������,
������� �� 0.0254. ����� ������������ ��� � ������ � ����� � �����������,
�������� �� 2.2. ����� ����� ����������� �̲, �������� ����� � ����������� ��
������� ����� � ������. ��� ������������� ��������� �������������
�������������� ����������� ������������� ���������. */
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
