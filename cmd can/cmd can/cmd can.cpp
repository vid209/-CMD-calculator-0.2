#include <iostream>
#include <limits>

int main() {
    double num1, num2, res;
    char math;

    std::cout << "enter num1 : ";
    while (!(std::cin >> num1)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Enter a number: ";
    }

    std::cout << "enter num2 : ";
    while (!(std::cin >> num2)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Enter a number: ";
    }

    std::cout << "enter math symbol(+, -, *, / ) : ";
    while (!(std::cin >> math) || (math != '+' && math != '-' && math != '*' && math != '/')) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid operator. Enter +, -, *, or /: ";
    }

    switch (math) {
    case '+':
        res = num1 + num2;
        break;
    case '-':
        res = num1 - num2;
        break;
    case '*':
        res = num1 * num2;
        break;
    case '/':
        if (num2 == 0.0) {
            std::cout << "Error: Division by zero! " << std::endl;
            return 1;
        }
        res = num1 / num2;
        break;
    default:
        std::cout << "Error: Invalid operator!" << std::endl;
        return 1;
    }

    std::cout << "Result: " << res << std::endl;
    return 0;
}