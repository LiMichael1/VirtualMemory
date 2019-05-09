#include "Word_.h"

int Word_::uint32()
{
	return (int)this._value;
}

void Word::uint32(int& x)
{
	_value = (uint32_t)x;
}

