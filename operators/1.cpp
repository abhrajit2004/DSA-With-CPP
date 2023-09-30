#include<iostream>

using namespace std;

int main(){
    int a = 10;
    // int b = ++a;
    int b = a--;
    cout << "The value of a is " << a << endl; 
    cout << "The value of b is " << b;
    return 0;
}