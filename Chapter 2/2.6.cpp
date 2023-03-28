/* �������� ���������, � ������� ������� main () �������� ������������
������������� �������, ����������� � �������� ��������� ���������� � ��������
����� � ������������ ���������� � ��������������� ��������. ���������
������ ������ ������ �� ���� �������� � �������� ����� � ����������
��������� ���������:
    Enter the number of light years: 4.2
    4.2 light years =
    265608 astronomical units.
��������������� ������� ����� �������� ���������� ����� �� ������ (�����
150 000 000 ��, ��� 93 000 000 ����), � �������� ��� ������������� ����������,
����������� ����� ����� �� ���� ������ ��� (�������� 10 ����������
����������, ��� 6 ���������� ����). (��������� ������ ����� ������ ���������
�� ���������� 4,2 �������� ����.) ����������� ��� double (��� � �������� 2.4)
� ��������� ����������� ��������������:
1 �������� ��� =
63 240 ��������������� ������ */
#include <iostream>

using namespace std;
double LightYearToAstro(double ly);
int main()
{
    double lightY;
    double astroU;
    cout << "Enter the number of light years: ";
    cin >> lightY;
    astroU = LightYearToAstro(lightY);
    cout << lightY << " light year(s) = " << astroU << " astronomical units" << endl;
    return 0;
}
double LightYearToAstro(double ly)
{
    return ly * 63240;
}
