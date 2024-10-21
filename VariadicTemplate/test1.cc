#include <iostream>
#include <bitset>
using namespace std;

void printX()
{
    cout << "NULL" << endl;
}

template <typename T, typename... Types>
void printX(T firstArg, Types... args)
{
    cout << firstArg << endl;
    printX(args...);
}

int main()
{
    printX(7.5 , "hello", bitset<16>(377), 42);

    return 0;
}