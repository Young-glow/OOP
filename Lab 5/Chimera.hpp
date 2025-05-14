#ifndef CHIMERA_HPP
#define CHIMERA_HPP
#include "Dragon.hpp"
#include "Griffin.hpp"

class Chimera : public Dragon, public Griffin
{
public:
    Chimera();
    virtual ~Chimera() override;

    void Print() override;
};

#endif