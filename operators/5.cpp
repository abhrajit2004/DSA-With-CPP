#include <iostream>

using namespace std;

int main()
{
    float t;
    cout << "Enter the temperature in fahrenheit: ";
    cin >> t;
    if (t > 70 && t < 90)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}