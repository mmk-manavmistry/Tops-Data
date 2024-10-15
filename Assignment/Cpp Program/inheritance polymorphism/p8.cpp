#include <iostream>
using namespace std;

class calculate {
public:
    void cal(int a, int b, int op) {
        if (op == '+') {
            return a + b;
        } else if (op == '-') {
            return a - b;
        }
    }

    void cal(int a, int b, char op) {
        if (op == '*') {
            return a * b;
        } else if (op == '/') {
            return a / b;
        }
    }

    void res(float a, float b, char op) {
        switch (op) {
            case '+':
                cout << "Addition: " << cal(a, b, '+') << endl;
                break;
            case '-':
                cout << "Subtraction: " << cal(a, b, '-') << endl;
                break;
            case '*':
                cout << "Multiplication: " << cal(a,b,'*') << endl;
                break;
            case '/':
                cout << "Division: " << cal(a,b, '/') << endl;
                break;
            default:
                cout << "Invalid:" << endl;
                break;
        }
    }
};

int main() {
    calculate c; 
    int num1, num2;  
    char operation;   

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;
    
    c.res(num1, num2, operation);
}
