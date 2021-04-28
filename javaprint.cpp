#include "javaprint.h"

JavaPrint::JavaPrint(const std::string& text):PrintOperatorUnit(text){};
std::string JavaPrint::compile( unsigned int level) const
{
    return generateShift(level) + "printf( \"" + m_text + "\" );\n";
};
