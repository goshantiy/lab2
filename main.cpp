#include <QCoreApplication>
#include <iostream>
#include "classunit.h"
#include "methodunit.h"
#include "printoperatorunit.h"
#include "ifactory.h"
#include "cppfactory.h"
//std::string generateProgram()
//{
// ClassUnit myClass( "MyClass" );
// myClass.add( std::make_shared< MethodUnit >( "testFunc1", "void", 0 ), ClassUnit::PUBLIC );
// myClass.add( std::make_shared< MethodUnit >( "testFunc2", "void",MethodUnit::STATIC ), ClassUnit::PRIVATE );
// myClass.add( std::make_shared< MethodUnit >( "testFunc3", "void",MethodUnit::VIRTUAL | MethodUnit::CONST ), ClassUnit::PUBLIC );
// auto method = std::make_shared< MethodUnit >( "testFunc4","void", MethodUnit::STATIC );
// method->add( std::make_shared< PrintOperatorUnit >( R"(Hello,world!\n)" ) );
// myClass.add( method, ClassUnit::PROTECTED );
// return myClass.compile();
//}
std::string generateProgram(IFactory* ifactory)
{
    auto myClass = ifactory->createClassUnit("myClass");
    myClass->add(ifactory->createMethodUnit("testFunc1", "void", 0), ClassUnit::PUBLIC);
    myClass->add(ifactory->createMethodUnit("testFunc2", "void",MethodUnit::STATIC), ClassUnit::PRIVATE);
    myClass->add(ifactory->createMethodUnit("testFunc3", "void",MethodUnit::VIRTUAL | MethodUnit::CONST),ClassUnit::PUBLIC);
    auto method=ifactory->createMethodUnit("testFunc4","void", MethodUnit::STATIC);
    method->add(ifactory->createPrintOperatorUnit(R"(Hello,world!\n)"));
    return myClass->compile();
}
int main(int argc, char *argv[])
{
       CppFactory cppfactory;
       std::cout<<generateProgram(&cppfactory)<<std::endl;
    return 0;
}
