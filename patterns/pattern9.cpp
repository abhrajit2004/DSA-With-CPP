#include <iostream>

using namespace std;

int main()
{
    int rows, cols;
    for (rows = 1; rows <= 5; rows = rows + 1)
    {
        for (cols = rows; cols >= 1; cols = cols - 1)
        {
            cout << cols << " ";
        }
        cout << endl;
    }

    return 0;
}