#include <iostream>

using namespace std;

int main()
{
    int rows, cols;
    // for (rows = 1; rows <= 5; rows = rows + 1)
    // {
    //     for (cols = 1; cols <= 5 - (rows - 1); cols = cols + 1)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    for (rows = 5; rows >= 1; rows = rows - 1)
    {
        for (cols = 1; cols <= rows; cols = cols + 1)
        {
            cout << cols << " ";
        }
        cout << endl;
    }

    return 0;
}