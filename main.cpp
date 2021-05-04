#include <QCoreApplication>
#include <iostream>
#include "classunit.h"
#include "methodunit.h"
#include "printoperatorunit.h"
#include "cppfactory.h"
#include "sharpfactory.h"
#include "javafactory.h"



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
    auto myClass = ifactory->createClassUnit("myClass", ClassUnit::PRIVATE|ClassUnit::ABSTRACT);
    myClass->add(ifactory->createMethodUnit("testFunc1", "void", 0), ClassUnit::PUBLIC);
    myClass->add(ifactory->createMethodUnit("testFunc2", "void",MethodUnit::STATIC), ClassUnit::PRIVATE);
    myClass->add(ifactory->createMethodUnit("testFunc3", "void",MethodUnit::VIRTUAL | MethodUnit::CONST),ClassUnit::PUBLIC);
    myClass->add(ifactory->createMethodUnit("testFunc6", "void",MethodUnit::VIRTUAL | MethodUnit::CONST),ClassUnit::INTERNAL);
    myClass->add(ifactory->createMethodUnit("testFunc5", "void",MethodUnit::VIRTUAL | MethodUnit::CONST),ClassUnit::PROTECTED_INTERNAL);
    auto method=ifactory->createMethodUnit("testFunc4","void", MethodUnit::STATIC);
    myClass->add(ifactory->createMethodUnit("testFunc7", "void",MethodUnit::ABSTRACT), ClassUnit::PRIVATE);
    method->add(ifactory->createPrintOperatorUnit(R"(Hello,world!\n)"));
    myClass->add(method, ClassUnit::PROTECTED);
    return myClass->compile();
}
int main(int argc, char *argv[])
{

       CppFactory cppfactory;
       std::cout<<"C++ Factory:"<<std::endl;
       std::cout<<generateProgram(&cppfactory)<<std::endl;
       SharpFactory sharpfactory;
       std::cout<<"C# Factory:"<<std::endl;
       std::cout<<generateProgram(&sharpfactory)<<std::endl;
       JavaFactory javafactory;
       std::cout<<"Java Factory:"<<std::endl;
       std::cout<<generateProgram(&javafactory)<<std::endl;
    return 0;
}
