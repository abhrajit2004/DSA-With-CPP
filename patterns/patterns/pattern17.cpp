#include <iostream>

using namespace std;

int main()
{
    int col, row, n;
    char ch;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (row = 1; row <= n; row = row + 1)
    {
        for (col = 1; col <= n - row; col = col + 1)
        {
            cout << "  ";
        }

        for (col = 1; col <= row; col = col + 1)
        {
            ch = 'A' + row - 1;
            cout << ch << " ";
        }
        cout << endl;
    }

    return 0;
}