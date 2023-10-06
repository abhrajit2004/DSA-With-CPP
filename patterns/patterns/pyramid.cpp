#include <iostream>

using namespace std;

int main()
{
    int cols, rows, n;
    cout << "Enter number of rows: ";
    cin >> n;
    for (rows = 1; rows <= n; rows = rows + 1)
    {
        for (cols = 1; cols <= n - rows; cols = cols + 1)
        {
            cout << "  ";
        }
        for (cols = 1; cols <= 2 * rows - 1; cols = cols + 1)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}