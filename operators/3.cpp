#include <iostream>

using namespace std;

int main()
{
    // int a, b, c;
    // cin >> a >> b >> c;
    // if (a > b && a > c)
    //     cout << "yes";
    // else
    //     cout << "no";
    char ch;
   
    cout << "Enter a character: ";
    cin >> ch;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        cout << "Vowel";
    else
        cout << "Consonant";

    return 0;
}