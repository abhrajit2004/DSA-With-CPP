#include <iostream>

using namespace std;

int main()
{
    int a, b;
    int x = 66;
    char c = 'b';
    // x = c;
    c = x;
    
    cout << c << endl;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Sum of numbers is: " << a + b;
    return 0;
}