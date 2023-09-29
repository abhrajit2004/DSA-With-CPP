#include<iostream>

using namespace std;

int main(){
    int rows, cols, n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (rows = 1; rows <= n; rows = rows + 1)
    {
        for (cols = 1; cols <= n-rows; cols = cols+ 1)
        {
            cout << "  ";
        } 
        for (cols = rows; cols >= 1; cols = cols - 1)
        {
            cout << cols << " ";
        }
        cout << endl;
    }
    return 0;
}