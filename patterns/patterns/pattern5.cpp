#include<iostream>

using namespace std;

int main(){
    int row,col;
    char count;
    for (row = 1; row <= 5; row = row + 1)
    {
        count = 'F';
        for (col = 1; col <= 6; col = col + 1)
        {
            cout << count << " ";
            count = count + 1;
        }
        cout << endl;
    }
    
    return 0;
}