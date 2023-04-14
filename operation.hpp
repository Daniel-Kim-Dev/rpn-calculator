#pragma once

//The base class that the abstract_operation class will derive from.
class operation
{
    public:
        virtual ~operation() {}

        virtual char get_code() = 0;

        virtual int perform(int, int) = 0;
};
