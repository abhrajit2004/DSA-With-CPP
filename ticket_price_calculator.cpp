#include<iostream>

using namespace std;

int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age<12)
    {
       cout << "Congrats! You are qualified for a discounted ticket price";
    }
    else if (age>65)
    {
        cout << "Congrats! You are qualified for a discounted ticket price";
    }
    else{
        cout << "Sorry! You are not eligible for a discounted ticket price";
    }
    return 0;
}