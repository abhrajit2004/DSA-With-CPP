#include <iostream>

using namespace std;

int main()
{
    int rows, n;
    char cols;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (rows = 1; rows <= n; rows++)
    {
        for (cols = 'A' + rows - 1; cols >= 'A'; cols--)
        {
            cout << cols << " ";
        }
        cout << endl;
    }

    return 0;
}