#pragma once

#include "abstract_operation.hpp"

//The operation class that uses the division operator.
class division_operation : public abstract_operation
{
    public:
        division_operation()
            : abstract_operation(DIVISION_CODE) {}

        virtual ~division_operation() {}

        static const char DIVISION_CODE{'/'};

        //Performs the division operation on two ints.
        //PRE: None.
        //POST: None
        //RETURN: Result as int.
        int perform(int a, int b) override
        {
            return (a / b);
        }
};
