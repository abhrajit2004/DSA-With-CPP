#include<iostream>

using namespace std;

int main(){
    int curr, prev = 1 , last = 0,n,i;
    cout << "Enter the number of terms: ";
    cin >> n;
    for (i = 3; i <= n; i = i + 1)
    {
        curr = prev + last;
        last  = prev;
        prev = curr;
    }
    cout << curr << " ";
    return 0;
}