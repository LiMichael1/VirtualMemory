#include "Ram.h"



Ram & Ram::instance()
{
	return Ram;
}

Ram::Ram()
{
}

Ram Ram::operator=(Ram Var2)
{
	return Ram();
}


Ram::~Ram()
{
}
