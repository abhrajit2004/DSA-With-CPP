#include <iostream>

using namespace std;

int main()
{
    int n,i;
    cout << "Enter range: ";
    cin >> n; 
    // for (i = n; i >= 1; i--)
    // {
    //     cout << i << " ";
    // }
    for (i = 1; i <= n; i = i + 3)
    {
        cout << i << " ";
    }

    return 0;
}