//Assignment No:02
//assignment name:Write a C++ program to find first n Fibonacci number where n is the input from user.
#include <iostream>
using namespace std;

int main() {
    int n, num1 = 0, num2 = 1, num3 = 0;

    cout << "Enter the value of n: ";
    cin >> n;

    cout<<"For the value of "<<n << " Fibonacci Series is: ";

    for (int i = 1; i <= n; ++i) {
        if(i == 1) {
            cout << num1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << num2 << ", ";
            continue;
        }
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;

        cout << num3 << ", ";
    }
    return 0;
}
