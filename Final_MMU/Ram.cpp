#include "Ram.h"



Ram::Ram()
{
}


Ram::~Ram()
{
}

Ram & Ram::instance()
{
    return *this;
}

Ram Ram::operator=(Page p)
{
    return Ram();
}

Ram Ram::operator=(Frame f)
{
    return Ram();
}

void Ram::read(std::ifstream IT)
{
}

/******************************************************
void ram_()
set frame i with mapped page
******************************************************/
void Ram::Ram_(Address x, Page p)
{
    Memory[x.frame().uint32()].setFrame(p);
}
