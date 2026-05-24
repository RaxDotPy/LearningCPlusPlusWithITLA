#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int menuNumber;
    double a, b;
    
    std::cout << "Welcome to the calculator programm. " << endl;
    std::cout << "Enter a number: 0) Exit, 1) Addition, 2) Substraction, 3) Multiplication, 4) Division" << endl;
    std::cin >> menuNumber;
    
    switch(menuNumber) {
        default:
            std::cout << "Please enter in only numbers (0-4)" << endl;
        case 0:
            std::cout << "Bye bye!";
            break;
        case 1:
            std::cout << "Addition: " << endl;
            std::cout << "Enter the first number: ";
            std::cin >> a;
            std::cout << "Enter the second number: ";
            std::cin >> b;
            std::cout << "Result= " << std::fixed << a + b;
            break;
        case 2:
            std::cout << "Substraction" << endl;
            std::cout << "Enter the first number: ";
            std::cin >> a;
            std::cout << "Enter the second number: ";
            std::cin >> b;
            std::cout << "Result= " << std::fixed << a - b;
            break;
        case 3:
            std::cout << "Multiplication" << endl;
            std::cout << "Enter the first number: ";
            std::cin >> a;
            std::cout << "Enter the second number: ";
            std::cin >> b;
            std::cout << "Result= " << std::fixed << a * b;
            break;
        case 4:
            std::cout << "Division" << endl;
            std::cout << "Enter the first number: ";
            std::cin >> a;
            std::cout << "Enter the second number: ";
            std::cin >> b;
            std::cout << "Result= " << std::fixed << a / b;
            break;
        
    }
    return 0;
}
