#include "Word_.h"

struct Address_ : public Word_
{
	Word_ address();
	Word_ displacement();
	Word_ frame();
	Word_ page();

};