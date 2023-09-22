#include <iostream>

using namespace std;

int main()
{
    // int marks;
    // cout << "Enter your marks: ";
    // cin >> marks;
    // if (marks > 33)
    //     cout << "Pass";
    // else
    //     cout << "Fail";
    int a,b;
    printf("Enter first number: ");
    cin >> a;
    printf("Enter second number: ");
    cin >> b;
    if(a>b){
        cout << a << " is greater than " << b;
    }
    else if(b>a){
        cout << b << " is greater than " << a;
    }
    else{
        cout << "Both are equal";
    }
    return 0;
}