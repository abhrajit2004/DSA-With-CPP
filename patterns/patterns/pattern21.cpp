#include <iostream>

using namespace std;

int main()
{
    int rows, cols, n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (rows = n; rows >= 1; rows = rows - 1)
    {
        // Print *

        for (cols = rows; cols >= 1; cols = cols - 1)
        {
            cout << "* ";
        }

        // Print spaces
        for (cols = 1; cols <= (2 * n - 2 * rows); cols = cols + 1)
        {
            cout << "  ";
        }

        // Print *
        for (cols = rows; cols >= 1; cols = cols - 1)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (rows = 1; rows <= n; rows = rows + 1)
    {
        // Print *

        for (cols = 1; cols <= rows; cols = cols + 1)
        {
            cout << "* ";
        }

        // Print spaces

        for (cols = 1; cols <= (2 * n - 2 * rows); cols = cols + 1)
        {
            cout << "  ";
        }

        // Print *

        for (cols = 1; cols <= rows; cols = cols + 1)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}