#include <iostream>
using namespace std;

int main() {
    int num;
    int factorial = 1;  

    cout << "Enter a positive number: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers!" << endl;
    }
    else {
        
        for (int i = 1; i <= num; ++i) {
            factorial *= i;  
        }

        cout << "Factorial of " << num << " = " << factorial << endl;
    }

    return 0;
}