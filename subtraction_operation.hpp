#pragma once

#include "abstract_operation.hpp"

//The operation class that uses the subtraction operator.
class subtraction_operation : public abstract_operation
{
    public:
        subtraction_operation()
            : abstract_operation(SUBTRACTION_CODE) {}

        virtual ~subtraction_operation() {}

        static const char SUBTRACTION_CODE{'-'};

        //Performs the subtraction operation on two ints.
        //PRE: None.
        //POST: None
        //RETURN: Result as int.
        int perform(int a, int b) override
        {
            return (a - b);
        }
};
