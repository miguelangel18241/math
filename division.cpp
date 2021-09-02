#include <string>
#include <iostream>

using namespace std;

int main()
{
    int counter = 0;
    int result = 0;
    int dividend, divisor;
    cout << "A number to divide?" << endl;
    cin >> dividend;
    cout << "A number to divide it for?" << endl;
    cin >> divisor;

    while (result < dividend)
    {
        result = result + divisor;
        counter++;
    }
    if (result == dividend)
    {
        cout << dividend << " divided by " << divisor << " is: " << counter << endl;
    }
    else
    {
        cout << dividend << " divided by " << divisor << " is: " << counter - 1 << endl;
    }
}