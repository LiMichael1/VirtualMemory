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
void Ram::read(Address &physical, T& data)
{
	data = this->memory[physical.frame().uint32()].data.Fbytes[physical.displacement()];
}

