/* �������� ���������, ������� ������ ������ �� ���� �������� ����� � �����.
������� main () ������ �������� ��� ��� �������� �������, ������� ���
void, ������� ��������� ��� ��� �������� � ��������� ����:
    Enter the number of hours: 9
    Enter the number of minutes: 28
    Time: 9:28 */
#include <iostream>

using namespace std;
void TimeDisp(int h, int m);
int main()
{
    int hour, minute;
    cout << "Enter the number of hours: ";
    cin >> hour;
    cout << "Enter the number of minutes: ";
    cin >> minute;
    TimeDisp(hour, minute);
    return 0;
}
void TimeDisp(int h, int m)
{
    cout << "Time: " << h << ':' << m;
}
