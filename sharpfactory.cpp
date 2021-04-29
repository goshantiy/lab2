#include "sharpfactory.h"
#include "sharpunit.h"
#include "sharpmethod.h"
#include "sharpprint.h"
SharpFactory::SharpFactory()
{
}
std::shared_ptr<ClassUnit> SharpFactory::createClassUnit(const std::string& name,Flags type)
{
    return std::make_shared<SharpUnit>(name,type);
}

std::shared_ptr<MethodUnit> SharpFactory::createMethodUnit(const std::string& name, const std::string& returnType, Flags flags)
{
    return std::make_shared<SharpMethod>(name, returnType, flags);
}

std::shared_ptr<PrintOperatorUnit> SharpFactory::createPrintOperatorUnit(const std::string& text)
{
    return std::make_shared<SharpPrint>(text);
}
