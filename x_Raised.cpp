#include <string>
#include <iostream>

using namespace std;

int main()
{
    int base;
    int result = 1;
    int exp;
    cout << "A base?" << endl;
    cin >> base;
    cout << "An exp?" << endl;
    cin >> exp;
    for (int i = 0; i < exp; i++)
    {
        result = result * base;
    }
    cout << result << endl;
}