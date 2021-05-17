#ifndef JAVAUNIT_H
#define JAVAUNIT_H
#include <classunit.h>
#include <methodunit.h>

class JavaUnit: public ClassUnit
{
public:
    JavaUnit(const std::string& name,Flags type);
    std::string compile(unsigned int level = 0) const override;
private:
    Flags Type;
};

#endif // JAVAUNIT_H
