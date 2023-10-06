#include<iostream>

using namespace std;

int main(){
    int rows, cols, n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (rows = n; rows >= 1; rows = rows - 1)
    {
        for (char name = 'A'; name <= 'A' + (rows-1); name = name + 1)
        {
            cout << name << " ";
        }
        cout << endl;
    }
    return 0;
}