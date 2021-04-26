#ifndef CLASSUNIT_H
#define CLASSUNIT_H
#include <vector>
#include "unit.h"
class ClassUnit : public Unit
{
public:
    enum AccessModifier
    {
        PUBLIC,
        PROTECTED,
        PRIVATE,
        INTERNAL,
        PRIVATE_PROTECTED,
        PROTECTED_INTERNAL
    };
    static const std::vector<std::string> ACCESS_MODIFIERS;
public:
    explicit ClassUnit( const std::string& name );
    void add(const std::shared_ptr<Unit>& unit, Flags flags);
    virtual std::string compile(unsigned int level = 0) const=0;
    virtual ~ClassUnit()=default;
protected:
    std::string m_name;
    using Fields = std::vector<std::shared_ptr<Unit>>;
    std::vector<Fields> m_fields;
};

#endif // CLASSUNIT_H
