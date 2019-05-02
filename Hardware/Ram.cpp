#include "Ram.h"


Ram & Ram::instance()
{
	return Ram;
}

Ram::Ram()
{

	for(int i =0 ; i < 256 ; i++)
	{

	}
}

Ram Ram::operator=(Ram Var2)
{
	return Var2;
}


Ram::~Ram()
{

}

template<T>
void Ram::read(std::ifstream IT)
{
	// get length of file:
    IT.seekg (0, IT.end);
    int length = IT.tellg();
    IT.seekg (0, IT.beg);



	IT.read(frames, length)
}
