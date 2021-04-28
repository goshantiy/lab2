#ifndef JAVAPRINT_H
#define JAVAPRINT_H


#include <printoperatorunit.h>

class JavaPrint: public PrintOperatorUnit
{
public:
    JavaPrint(const std::string& text);
    std::string compile(unsigned int level = 0) const;
};

#endif // JAVAPRINT_H
