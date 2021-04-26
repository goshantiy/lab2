#ifndef SHARPPRINT_H
#define SHARPPRINT_H
#include <printoperatorunit.h>

class SharpPrint: public PrintOperatorUnit
{
public:
    SharpPrint(const std::string& text);
    std::string compile(unsigned int level = 0) const;
};


#endif // SHARPPRINT_H
