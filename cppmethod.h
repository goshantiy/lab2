#ifndef CPPMETHOD_H
#define CPPMETHOD_H

#include <methodunit.h>
class CppMethod: public MethodUnit
{
public:
    CppMethod(const std::string& name, const std::string& returnType, Flags flags );
    std::string compile( unsigned int level) const override;
};

#endif // CPPMETHOD_H
