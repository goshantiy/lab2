#ifndef CLASSUNIT_H
#define CLASSUNIT_H
#include <vector>
#include "unit.h"
class ClassUnit : public Unit
{
public:
    enum AccessModifier
    {
        PUBLIC=1,
        PROTECTED=1<<1,
        PRIVATE=1<<2,
        INTERNAL=1<<3,
        PRIVATE_PROTECTED=1<<4,
        PROTECTED_INTERNAL=1<<5,
        FINAL=1<<6,
        ABSTRACT=1<<7
    };
    static const std::vector<std::string> ACCESS_MODIFIERS;
public:
    explicit ClassUnit( const std::string& name);
    void add(const std::shared_ptr<Unit>& unit, Flags flags);
    virtual std::string compile(unsigned int level = 0) const=0;
    virtual ~ClassUnit()=default;
protected:
    std::string m_name;
    using Fields = std::vector<std::shared_ptr<Unit>>;
    std::vector<Fields> m_fields;
};

#endif // CLASSUNIT_H
