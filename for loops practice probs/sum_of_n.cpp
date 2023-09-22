#include<iostream>

using namespace std;

int main(){
    int sum = 0,i,n;
    cout << "Enter the range: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
       sum = sum + (i*i);
    }
    cout << sum;
    return 0;
}