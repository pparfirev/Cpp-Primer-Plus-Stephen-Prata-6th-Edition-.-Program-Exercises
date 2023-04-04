/* Напишите программу, которая запрашивает количество секунд в виде целого
значения (используйте тип long или long long, если последний доступен) и
затем отображает эквивалентное значение в сутках, часах, минутах и секундах.
Для представления количества часов в сутках, количества минут в часе и
количества секунд в минуте используйте символические константы. Результат
выполнения программы должен выглядеть следующим образом:
    Enter the number of seconds: 31600000
    31600000 seconds =
    365 days, 17 hours, 46 minutes, 40 seconds */
#include <iostream>

using namespace std;

int main()
{
    long long sec;
    const int sec_in_min = 60;
    const int min_in_h = 60;
    const int h_in_day = 24;
    cout << "Enter the number of seconds: ";
    cin >> sec;
    cout << sec << " seconds = " << endl;
    int days = sec / sec_in_min / min_in_h / h_in_day;
    int hours = (sec - days * sec_in_min * min_in_h * h_in_day) / sec_in_min / min_in_h;
    int minutes = (sec - (days * sec_in_min * min_in_h * h_in_day) - (hours * sec_in_min * min_in_h))
                / sec_in_min;
    int seconds = (sec - (days * sec_in_min * min_in_h * h_in_day) - (hours * sec_in_min * min_in_h)
                - (minutes * sec_in_min)) % sec_in_min;
    cout << days << " days, "
    << hours << " hours, "
    << minutes << " minutes, " << seconds << " seconds" << endl;
    return 0;
}
