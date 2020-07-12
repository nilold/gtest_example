#ifndef JOHN_THE_CAT_H
#define JOHN_THE_CAT_H

#include "CatInterface.h"
#include <string>

class JohnTheCat: public CatInterface
{
public:
    JohnTheCat() = delete;
    JohnTheCat(int years): m_years(years){};
    virtual ~JohnTheCat(){};

    virtual bool isSleeping() override {
        if(m_years <= 2){
            return false;
        }
        return true;
    };

    virtual bool likesFood(const std::string& food) override {
        if(food == "meat" && m_years > 0){
            return true;
        }
        return false;
    }

private:
    int m_years;
};

#endif /*JOHN_THE_CAT_H*/