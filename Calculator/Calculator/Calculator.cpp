#include <iostream>
#include <string>

int main()
{
    float n1, n2;
    char o;
    std::cout << "Enter operator (\'+\' to Add,\'-\' to Subtract,\'*\' to Multiply,\'/\' to Divide)> ";
    std::cin >> o;
    std::cout << "Enter first value> ";
    std::cin >> n1;
    std::cout << "Enter second value> ";
    std::cin >> n2;
    switch (o) {
    case '+':
        std::cout <<"n1 + n2 = " << n1 + n2;
        break;
    case '-':
        std::cout << "n1 - n2 = " << n1 - n2;
        break;
    case '*':
        std::cout << "n1 * n2 = " << n1 * n2;
        break;
    case '/':
        if (n1 == 0 || n2 == 0) {
            std::cout << "WHAT ARE DOING?!";
        }
        else {
            std::cout << "n1 / n2 = " << n1 / n2;
        }
        break;
    default:
        std::cout << "Nice try bub!";
        break;
    }
}
