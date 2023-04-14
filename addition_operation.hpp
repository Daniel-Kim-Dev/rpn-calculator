#pragma once

#include "abstract_operation.hpp"

//The operation class that uses the addition operator.
class addition_operation : public abstract_operation
{
    public:
        addition_operation()
            : abstract_operation(ADDITION_CODE) {}

        virtual ~addition_operation() {}

        static const char ADDITION_CODE{'+'};

        //Performs the addition operation on two ints.
        //PRE: None.
        //POST: None
        //RETURN: Result as int.
        int perform(int a, int b) override
        {
            return (a + b);
        }
};
