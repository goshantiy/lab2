#ifndef SHARPFACTORY_H
#define SHARPFACTORY_H
#include <ifactory.h>

class SharpFactory: public IFactory
{
public:
    SharpFactory();
    std::shared_ptr<ClassUnit> createClassUnit(const std::string& name,Flags type) override;
    std::shared_ptr<MethodUnit> createMethodUnit(const std::string& name, const std::string& returnType, Flags flags) override;
    std::shared_ptr<PrintOperatorUnit> createPrintOperatorUnit(const std::string& text) override;
};


#endif // SHARPFACTORY_H
