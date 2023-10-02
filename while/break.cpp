#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int i;
    // for (i = 1; i <= n; i++)
    // {
    //     if (i == 4)
    //         break;
    //     cout << i << endl;
    // }
    for (i = 1; i <= n; i++)
    {
        if (i % 4 == 0)
            continue;
        cout << i << " ";
    }

    return 0;
}