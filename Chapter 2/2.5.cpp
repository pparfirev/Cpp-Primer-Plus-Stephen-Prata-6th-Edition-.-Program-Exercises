/* �������� ���������, � ������� ������� main() �������� ������������
������������� �������, ����������� � �������� ��������� ��������
����������� �� ������� � ������������ ������������� �������� ����������� ��
����������. ��������� ������ ������ ������ �� ���� �������� �� ������� �
���������� ��������� ���������:
    Please enter a Celsius value: 20
    20 degrees Celsius is 68 degrees Fahrenheit.
��� ������� ��� ����� ��������������:
����������� � �������� �� ���������� =
1,8 *
����������� � �������� �� ������� + 32 */
#include <iostream>

using namespace std;
double CelsToFahr(double c);
int main()
{
    double cels;
    double fahr;
    cout << "Enter the temperature in celsius: " << endl;
    cin >> cels;
    fahr = CelsToFahr(cels);
    cout << cels << " celsius = " << fahr << " fahrenheit" << endl;
    return 0;
}
double CelsToFahr(double c)
{
    return 1.8 * c + 32;
}
