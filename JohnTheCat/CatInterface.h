#ifndef CAT_INTERFACE_H
#define CAT_INTERFACE_H

#include <string>

class CatInterface
{
public:
    virtual ~CatInterface() {};
    virtual bool isSleeping() = 0;
    virtual bool likesFood(const std::string& food) = 0;
};

#endif /*CAT_INTERFACE_H*/