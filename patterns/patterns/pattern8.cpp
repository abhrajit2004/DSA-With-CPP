#include <iostream>

using namespace std;

int main()
{
    int rows, cols;
    for (rows = 1; rows <= 5; rows = rows + 1)
    {
        for (cols = 1; cols <= rows; cols = cols + 1)
        {
            cout << rows << " ";
        }
        cout << endl;
    }
    return 0;
}