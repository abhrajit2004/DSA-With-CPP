#include <iostream>

using namespace std;

int main()
{
    int n;
    int i;
    cout << "Enter the range: ";
    cin >> n;
    // for (i = 1; i <= 10; i++)
    // {
    //     cout << i << endl;
    // }
    for (i = 2; i <= n; i += 2)
    {
        cout << i << " * " << i << " = " << i*i<< endl;
    }
    return 0;
}