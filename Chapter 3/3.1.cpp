/* �������� �������� ���������, ������� ����������� ���� � ������ �
����������� �� � ���� � �����. ��������� ������ ������������ ������
������������� ��� ����������� �������, ��� ����� ������������� ����. ���
������������� ������������ �������������� ����������� ���������� ��������� const. */
#include <iostream>

using namespace std;

int main()
{
    int inch;
    cout << "Enter your height in inches: ____\b\b\b\b";
    cin >> inch;
    cout << "Your height is " << inch / 12 << " foots and " << inch % 12 << " inches" << endl;
    return 0;
}
