#include "classunit.h"
const std::vector< std::string > ClassUnit::ACCESS_MODIFIERS = {"public","protected", "private" , "private protected" ,"internal" ,  "protected internal"};
ClassUnit::ClassUnit( const std::string& name ) : m_name( name )
{
       m_fields.resize( 1<<ACCESS_MODIFIERS.size() );
}
void ClassUnit::add(const std::shared_ptr<Unit>& unit, Flags flags)
{
    int accessModifier = PRIVATE;
    if(flags < 1<<ACCESS_MODIFIERS.size())
    {
        accessModifier = flags;
    }
    m_fields[accessModifier].push_back(unit);
}

