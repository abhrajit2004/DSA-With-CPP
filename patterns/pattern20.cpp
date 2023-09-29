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
        for (cols = 1; cols <= rows; cols = cols + 1)
        {
           cout << cols << " ";
        }
        for (cols = rows-1; cols >= 1; cols = cols - 1)
        {
           cout << cols << " ";
        }
        cout << endl;
    }

    return 0;
}