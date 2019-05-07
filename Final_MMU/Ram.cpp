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
/****************************
Ram Ram::operator=(Page p)
{
    return Ram();
}

Ram Ram::operator=(Frame f)
{
    return Ram();
}
******************************/

template<typename T>
void Ram::readRam(Address physical, T& data)
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
