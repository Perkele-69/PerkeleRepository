#include <iostream>
#include <string>

int main() {

nahuy:
    
    std::cout << "Select action:\n1. Addition,\n2. Subtraction,\n3. Multiplication,\n4. Dividing." << std::endl;

    std::cout << "->";

    int action;
    std::cin >> action;

    int number1;
    int number2;

    std::cout << "Enter first number: ";
    std::cin >> number1;
    std::cout << "Enter second number: ";
    std::cin >> number2;
    
    int result;
    std::string resulterror = "The action selected is incorrect.";



    if (action == 1) {
        result = number1 + number2;
        std::cout << "Addition result = " << result;
    }


    else if (action == 2) {
        result = number1 - number2;
        std::cout << "Subtraction result = " << result;
    }


    else if (action == 3) {
        result = number1 * number2;
        std::cout << "Multiplication result = " << result;
    }


    else if (action == 4) {

        if (number2 == 0) {
            std::cout << "You can't divide by zero.";
        }

        else {

            result = number1 / number2;
            std::cout << "Dividing result = " << result << std::endl;
        }
    }


    else {
        std::cout << resulterror;
    }

    
    int repeat = 0;
    std::cout << "\nRepeat? (0/1) ";
    std::cin >> repeat;
    
    if (repeat == 1) {
        std::cout << "\n";
        goto nahuy;
    }

    return 0;
}
