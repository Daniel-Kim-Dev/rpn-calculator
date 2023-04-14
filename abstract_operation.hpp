#pragma once

#include "operation.hpp"

//The base class that the four different operation classes will derive from.
class abstract_operation : public operation
{
    private:
        char operation_type;
    public:
        abstract_operation(char operation)
        {
            operation_type = operation;
        }

        virtual ~abstract_operation() {}

        //Will return the operation_type.
        //PRE: None.
        //POST: None.
        //RETURN: operation_type as char.
        char get_code() override
        {
            return operation_type;
        }
};
