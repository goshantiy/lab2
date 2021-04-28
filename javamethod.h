#ifndef JAVAMETHOD_H
#define JAVAMETHOD_H

#include <methodunit.h>
class JavaMethod: public MethodUnit
{
public:
    JavaMethod(const std::string& name, const std::string& returnType, Flags flags );
    std::string compile( unsigned int level) const;
};

#endif // JAVAMETHOD_H
