#ifndef SHARPUNIT_H
#define SHARPUNIT_H
#include <classunit.h>

class SharpUnit: public ClassUnit
{
public:
    SharpUnit(const std::string& name);
    std::string compile(unsigned int level = 0) const override;
};


#endif // SHARPUNIT_H
