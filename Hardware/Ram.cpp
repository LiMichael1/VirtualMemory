#include "Ram.h"

Ram::Ram()
{
}


Ram::~Ram()
{
}


void Ram::Ram(Address x, Page p)
{
    Memory[x.frame().uint32()].setFrame(p);
}


template<typename T>
void Ram::read(Address physical , T& data) 
{
	if(Memory[physical].status.dirty = false)
	{
		data = Memory[physical].data;
	}
}
