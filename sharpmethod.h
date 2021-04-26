#ifndef SHARPMETHOD_H
#define SHARPMETHOD_H

#include <methodunit.h>
class SharpMethod: public MethodUnit
{
public:
    SharpMethod(const std::string& name, const std::string& returnType, Flags flags );
    std::string compile( unsigned int level) const;
};


#endif // SHARPMETHOD_H
