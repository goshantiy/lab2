#include "cppprint.h"

CppPrint::CppPrint(const std::string& text):PrintOperatorUnit(text){};
std::string CppPrint::compile( unsigned int level) const
{
    return generateShift(level) + "printf( \"" + m_text + "\" );\n";
};
