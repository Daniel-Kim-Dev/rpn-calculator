#pragma once

#include "addition_operation.hpp"
#include "subtraction_operation.hpp"
#include "multiplication_operation.hpp"
#include "division_operation.hpp"
#include <stack>
#include <string>
#include <sstream>

//Uses reverse polish notation to calculate a formula.
class rpn_calculator
{
    private:
        int result;

        std::stack<int> stack;

        //Uses switch statement to determine which new operation type to return.
        //PRE: Passed in parameter must be +, -, *, or /
        //POST: None.
        //RETURN: Dynamically allocated operation.
        operation *operation_type(char operation)
        {
            switch(operation)
            {
                case addition_operation::ADDITION_CODE :
                    return new addition_operation;
                case subtraction_operation::SUBTRACTION_CODE :
                    return new subtraction_operation;
                case multiplication_operation::MULTIPLICATION_CODE :
                    return new multiplication_operation;
                case division_operation::DIVISION_CODE :
                    return new division_operation;
                default :
                    return nullptr;
            }
        }

        //Pops the two ints from the stack and pushes a new result from the performed operation of the popped ints.
        //PRE: None.
        //POST: Stack will have new result on top.
        //RETURN: None.
        void perform(operation *operation)
        {
            int first{stack.top()};
            stack.pop();

            int second{stack.top()};
            stack.pop();

            result = operation->perform(second, first);

            stack.push(result);

            delete operation;
        }

    public:
        //Uses istringstreams to extract numbers from the string to perform using reverse polish notation.
        //PRE: Formula must be numbers and operators.
        //POST: Stack will have a final result on top.
        //RETURN: result as int.
        int process_form(std::string formula)
        {
            std::string operand;
            std::istringstream iss{formula};
            std::istringstream iss2;
            int number;

            while (iss >> operand)
            {
                iss2.str(operand);

                if (iss2 >> number)
                {
                    stack.push(number);
                } else
                  {
                      perform(operation_type(operand[0]));
                  }

                iss2.clear();
            }

            return result;
        }
};
