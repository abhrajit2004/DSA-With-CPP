#include<iostream>

using namespace std;

int main(){
    int n,i,sum = 0;
    cout << "Enter range: ";
    cin >> n;
    for (i = 1; i <= n; i = i + 1)
    {
        sum = sum + i*i*i;
    }
    cout << "Sum of cube of first " << n << " natural numbers is: " << sum;
    return 0;
}