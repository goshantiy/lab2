#include "sharpunit.h"

SharpUnit::SharpUnit(const std::string& name, Flags type) : ClassUnit(name), Type(type)
{

}

std::string SharpUnit::compile(unsigned int level) const
{
    std::string result="";
    if( Type & PUBLIC ) {
        result += "public ";
    }else
    if( Type & PRIVATE ) {
        result += "private ";
    }else
    if( Type & PROTECTED ) {
        result += "protected ";
    }
    result += generateShift(level) + "class " + m_name + " {\n";

    for(size_t i = 0; i < ACCESS_MODIFIERS.size(); ++i) {
        if(m_fields[1<<i].empty()) {
            continue;
        }
        result += ACCESS_MODIFIERS[i] + ":\n";
        for(const auto& f : m_fields[1<<i]) {
            result += f->compile(level + 1);
        }
        result += "\n";
    }
    result += generateShift(level) + "};\n";
    return result;
}
