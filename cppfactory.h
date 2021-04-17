#ifndef CPPFACTORY_H
#define CPPFACTORY_H
#include <ifactory.h>

class CppFactory: public IFactory
{
public:
    CppFactory();
    std::shared_ptr<ClassUnit> createClassUnit(const std::string& name) override;
    std::shared_ptr<MethodUnit> createMethodUnit(const std::string& name, const std::string& returnType, Flags flags) override;
    std::shared_ptr<PrintOperatorUnit> createPrintOperatorUnit(const std::string& text) override;
};

#endif // CPPFACTORY_H
