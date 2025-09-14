#include <iostream>

using namespace std;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int num1, num2, result = 0;
    char oper;

    cout << "Enter your equation ex (2 + 3)\n";
    cin >> num1 >> oper >> num2;

    if (oper == '+') {
        result = add(num1, num2);
    } else if (oper == '-') {
        result = subtract(num1, num2);
    
    }

    cout << "Result: " << result << endl;

    return 0;
}