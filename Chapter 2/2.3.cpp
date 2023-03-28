/* Напишите программу на C++, которая использует три определяемых
пользователем функции (включая main ()) и генерирует следующий вывод:

    Three blind mice
    Three blind mice
    See how they run
    See how they run

Одна функция, вызываемая два раза, должна генерировать первые две строки,
а другая, также вызываемая два раза —
оставшиеся строки. */
#include <iostream>

using namespace std;

void mice(void);
void run(void);
int main()
{
    mice();
    mice();
    run();
    run();
    return 0;
}
void mice(void)
{
    cout << "Three blind mice" << endl;
}
void run(void)
{
    cout << "See how they run" << endl;
}
