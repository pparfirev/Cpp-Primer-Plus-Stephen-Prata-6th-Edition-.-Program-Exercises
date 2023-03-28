/* Ќапишите программу на C++, котора€ выдает запрос на ввод рассто€ни€ в фарлон-
гах и преобразует его в €рды. (ќдин фарлонг равен 220 €рдам, или 201168 м.) */
#include <iostream>

using namespace std;

int main()
{
    int furlongs;
    cout << "Enter the length in furlongs: ";
    cin >> furlongs;
    cout << furlongs << " furlong(s) is equal " << furlongs * 220 << " yard(s)" << endl;
    return 0;
}
