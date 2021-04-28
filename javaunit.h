#ifndef JAVAUNIT_H
#define JAVAUNIT_H
#include <classunit.h>

class JavaUnit: public ClassUnit
{
public:
    JavaUnit(const std::string& name);
    std::string compile(unsigned int level = 0) const override;
};

#endif // JAVAUNIT_H
