#pragma once

#include "abstract_operation.hpp"

//The operation class that uses the multiplication operator.
class multiplication_operation : public abstract_operation
{
    public:
        multiplication_operation()
            : abstract_operation(MULTIPLICATION_CODE) {}

        virtual ~multiplication_operation() {}

        static const char MULTIPLICATION_CODE{'*'};

        //Performs the multiplication operation on two ints.
        //PRE: None.
        //POST: None
        //RETURN: Result as int.
        int perform(int a, int b) override
        {
            return (a * b);
        }
};
