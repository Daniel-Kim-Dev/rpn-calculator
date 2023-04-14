#include "rpn_calculator.hpp"
#include <iostream>

int main()
{
    std::cout << "Enter your formula:\n";
    std::string formula;
    std::getline(std::cin, formula);
    std::cout << "You entered " << formula << std::endl;

    rpn_calculator calculator;
    int result = calculator.process_form(formula);
    std::cout << "The result is:\n";
    std::cout << result << std::endl;

    return 0;
}
