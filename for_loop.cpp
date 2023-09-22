#include <iostream>

using namespace std;

int main()
{
    int n;
    int i;
    cout << "Enter the range: ";
    cin >> n;
    for (i = 1; i <= n; i = i + 1)
    {
        if (i % 2 != 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}