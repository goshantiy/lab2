    #include "javamethod.h"
JavaMethod::JavaMethod( const std::string& name, const std::string& returnType, Flags flags): MethodUnit(name,returnType,flags)
{

}
std::string JavaMethod::compile( unsigned int level) const {
    std::string result = generateShift( level );

    if( m_flags & STATIC )
    {
        result += "static ";
    }
    if( m_flags & FINAL )
    {
        result += "final ";
    }
    else if( m_flags & ABSTRACT )
    {
        result+="abstact ";
    }

    result += m_returnType + " ";
    result += m_name + "()";

    if( m_flags & CONST ) {
        result += " const";
    }

    result += " {\n";

    for( const auto& b : m_body ) {
        result += b->compile( level + 1 );
    }

    result += generateShift( level ) + "}\n";

    return result;
}
