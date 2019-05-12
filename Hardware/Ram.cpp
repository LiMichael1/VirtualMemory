#include "Ram.h"

Ram::Ram()
{
	
}

template<typename T>
void Ram::read(Address& physical , T& data) 
{

	data = this->memory[physical.frame().uint32()].data.Fbytes[physical.displacement()];
	
}
