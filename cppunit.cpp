#include "cppunit.h"


CppUnit::CppUnit(const std::string& name) : ClassUnit(name)
{

}

std::string CppUnit::compile(unsigned int level) const
{
    std::string result = generateShift(level) + "class " + m_name + " {\n";

    for(size_t i = 0; i < ACCESS_MODIFIERS.size(); ++i) {
        if(m_fields[i].empty()) {
            continue;
        }
        result += ACCESS_MODIFIERS[i] + ":\n";
        for(const auto& f : m_fields[i]) {
            result += f->compile(level + 1);
        }
        result += "\n";
    }
    result += generateShift(level) + "};\n";
    return result;
}
