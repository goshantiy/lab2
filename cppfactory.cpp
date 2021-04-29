#include "cppfactory.h"
#include <cppunit.h>
#include <cppmethod.h>
#include <cppprint.h>
CppFactory::CppFactory()
{
}
std::shared_ptr<ClassUnit> CppFactory::createClassUnit(const std::string& name,Flags type)
{
     return std::make_shared<CppUnit>(name);
}

std::shared_ptr<MethodUnit> CppFactory::createMethodUnit(const std::string& name, const std::string& returnType, Flags flags)
{
    return std::make_shared<CppMethod>(name, returnType, flags);
}

std::shared_ptr<PrintOperatorUnit> CppFactory::createPrintOperatorUnit(const std::string& text)
{
    return std::make_shared<CppPrint>(text);
}
