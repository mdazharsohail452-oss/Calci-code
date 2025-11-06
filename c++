#include <iostream>
using namespace std;
class Calculator {
public:
    double calculate(double num1, char op, double num2) {
        switch (op) {
            case '+':
                return num1 + num2;
            case '-':
                return num1 - num2;
            case '*':
                return num1 * num2;
            case '/':
                if (num2 != 0)
                    return num1 / num2;
                else {
                    cout << "Error: Division by zero!" << endl;
                    return 0;
                }
            default:
                cout << "Error: Invalid operator!" << endl;
                return 0;
        }
    }
};

int main() {
    Calculator calc;
    double num1, num2, result;
    char op;

    cout << "Enter the oeration you want to perform(+,-,*,/): ";
    cin >> op;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    result = calc.calculate(num1, op, num2);

    cout << "Result: " << result << endl;}