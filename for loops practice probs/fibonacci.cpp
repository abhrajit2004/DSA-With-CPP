#include<iostream>

using namespace std;

int main(){
    int curr, prev = 1 , last = 0,n,i;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << last << " " << prev << " ";
    for (i = 3; i <= n; i = i + 1)
    {
        curr = prev + last;
        cout << curr << " ";
        last  = prev;
        prev = curr;
    }
    
    return 0;
}