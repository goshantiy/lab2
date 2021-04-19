#ifndef CPPPRINT_H
#define CPPPRINT_H
#include <printoperatorunit.h>

class CppPrint: public PrintOperatorUnit
{
public:
    CppPrint(const std::string& text);
    std::string compile(unsigned int level = 0) const;
};

#endif // CPPPRINT_H
