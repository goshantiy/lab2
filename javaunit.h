#ifndef JAVAUNIT_H
#define JAVAUNIT_H
#include <classunit.h>

class JavaUnit: public ClassUnit
{
public:
    enum Modifier
    {
        PUBLIC = 1,
        PRIVATE = 1 << 1,
        VIRTUAL = 1 << 2
    };
    JavaUnit(const std::string& name,Flags type);
    std::string compile(unsigned int level = 0) const override;
private:
    Flags Type;
};

#endif // JAVAUNIT_H
