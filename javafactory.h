#ifndef JAVAFACTORY_H
#define JAVAFACTORY_H
#include <ifactory.h>

class JavaFactory: public IFactory
{
public:
    JavaFactory();
    std::shared_ptr<ClassUnit> createClassUnit(const std::string& name,Flags type) override;
    std::shared_ptr<MethodUnit> createMethodUnit(const std::string& name, const std::string& returnType, Flags flags) override;
    std::shared_ptr<PrintOperatorUnit> createPrintOperatorUnit(const std::string& text) override;
};

#endif // JAVAFACTORY_H
