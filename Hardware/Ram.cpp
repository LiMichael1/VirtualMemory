#include "Ram.h"



Ram & Ram::instance()
{
	return Ram;
}

Ram::Ram()
{

	for(int i =0 ; i < 256 ; i++)
	{
		status[i] = false;
	}
}

Ram Ram::operator=(Ram Var2)
{
	return Var2;
}


Ram::~Ram()
{
}
