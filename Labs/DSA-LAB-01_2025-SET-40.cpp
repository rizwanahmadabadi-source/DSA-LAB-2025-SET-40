#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char op;
    float result;

    cout << "Simple Calculator" << endl;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    switch (op)
    {
        case '+':
            result = num1 + num2;
            cout << "Result = " << result;
            break;

        case '-':
            result = num1 - num2;
            cout << "Result = " << result;
            break;

        case '*':
            result = num1 * num2;
            cout << "Result = " << result;
            break;

        case '/':
            if (num2 != 0)
            {
                result = (float)num1 / num2;
                cout << "Result = " << result;
            }
            else
            {
                cout << "Division by zero is not possible.";
            }
            break;

        default:
            cout << "Invalid Operator!";
    }

    return 0;
}
