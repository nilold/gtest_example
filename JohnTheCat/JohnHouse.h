#ifndef BETTER_JOHN_CAT_H
#define BETTER_JOHN_CAT_H

#include "CatInterface.h"
#include <iostream>
#include <string>

class JohnHouse: public CatInterface
{
public:
    JohnHouse() = delete;
    JohnHouse(CatInterface* john): m_john(john){}
    virtual ~JohnHouse(){}

    virtual bool isSleeping() override
    {
        std::cout << "John house lies, for it is john's friend.\n";
        return !m_john->isSleeping();
    }

    virtual bool likesFood(const std::string& food) override
    {
        if(food == "milk"){
            return true;
        }

        return m_john->likesFood(food);
    }

private:
    CatInterface* m_john;
};

#endif /*BETTER_JOHN_CAT_H*/