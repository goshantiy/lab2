#include "javafactory.h"
#include "javamethod.h"
#include "javaunit.h"
#include "javaprint.h"
JavaFactory::JavaFactory()
{
}
std::shared_ptr<ClassUnit> JavaFactory::createClassUnit(const std::string& name)
{
    return std::make_shared<JavaUnit>(name);
}

std::shared_ptr<MethodUnit> JavaFactory::createMethodUnit(const std::string& name, const std::string& returnType, Flags flags)
{
    return std::make_shared<JavaMethod>(name, returnType, flags);
}

std::shared_ptr<PrintOperatorUnit> JavaFactory::createPrintOperatorUnit(const std::string& text)
{
    return std::make_shared<JavaPrint>(text);
}
