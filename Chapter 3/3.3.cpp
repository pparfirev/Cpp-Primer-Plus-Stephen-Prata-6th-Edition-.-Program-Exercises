/* Напишите программу, которая запрашивает широту в градусах, минутах и
секундах, после чего отображает широту в десятичном формате. В одной минуте
60 угловых секунд, а в одном градусе 60 угловых минут; представьте эти
значения с помощью символических констант. Для каждого вводимого значения
должна использоваться отдельная переменная. Результат выполнения
программы должен выглядеть следующим образом:
    Enter a latitude in degrees, minutes, and seconds:
    First, enter the degrees: 37
    Next, enter the minutes of arc: 51
    Finally, enter the seconds of arc: 19
    37 degrees, 51 minutes, 19 seconds =
    37.8553 degrees */
#include <iostream>

using namespace std;

int main()
{
    cout.setf(ios_base::fixed, ios_base::floatfield);
    int degree, minute, second;
    const double sec_in_min = 60.0;
    const double min_in_deg = 60.0;
    cout << "Enter a latitude in degrees, minutes, and seconds: " << endl;
    cout << "First, enter the degrees: ";
    cin >> degree;
    cout << "Next, enter the minutes of arc: ";
    cin >> minute;
    cout << "Finally, enter the seconds of arc: ";
    cin >> second;
    cout << degree << " degrees, " << minute << " minutes, "
    << second << " seconds = " << double (degree + (minute / min_in_deg)
    + (second / sec_in_min / sec_in_min)) << endl;
    return 0;
}
