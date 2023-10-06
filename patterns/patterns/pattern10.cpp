#include <iostream>

using namespace std;

int main()
{
    char ch = 'a';
    int row, col;
    for (row = 1; row <= 5; row = row + 1)
    {
        ch = 'a' + (row - 1);
        for (col = 1; col <= row; col = col + 1)
        {
            cout << ch << " ";
        }
        cout << endl;
    }

    return 0;
}