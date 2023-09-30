#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << !0 << endl;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    if (a <= b)
        cout << "yes";
    else
        cout << "no";

    return 0;
}