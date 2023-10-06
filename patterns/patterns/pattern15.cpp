#include <iostream>

using namespace std;

int main()
{
    int row, col, n;
    char ch;
    cout << "Input number: ";
    cin >> n;
    for (row = 1; row <= n; row = row + 1)
    {
        for (col = 1; col <= n - row; col = col + 1)
        {
            cout << "  ";
        }

        for (ch = 'A'; ch <= 'A' + (row-1); ch = ch + 1)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}