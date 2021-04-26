#include "sharpprint.h"

SharpPrint::SharpPrint(const std::string& text):PrintOperatorUnit(text){};
std::string SharpPrint::compile( unsigned int level) const
{
    return generateShift(level) + "printf( \"" + m_text + "\" );\n";
};
