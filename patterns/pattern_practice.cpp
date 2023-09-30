#include<iostream>

using namespace std;

int main(){
    int rows, cols, n;
    char name;
    cout << "Enter the number of rows: ";
    cin >> n;
    // for (rows = 1; rows <= n; rows = rows + 1)
    // {
    //     for (cols = 1; cols <= n-rows; cols = cols + 1)
    //     {
    //         cout << "  ";
    //     }
    //     for (cols = 1; cols <= (2*rows-1); cols = cols + 1)
    //     {
    //         cout << cols << " ";
    //     }
    //     cout << endl;
        
    // }
    for (rows = 1; rows <= n; rows = rows + 1)
    {
        name = 'A';
        for (cols = 1; cols <= n-rows; cols = cols + 1)
        {
            cout << "  ";
        }
        for (cols = 1; cols <= rows; cols = cols + 1)
        {
            cout << name << " ";
            name = name + 1;
        }
        
        for (cols = rows - 1; cols >= 1; cols = cols - 1)
        {
            cout << cols << " ";
        }
        cout << endl;
        
    }
    
    return 0;
}