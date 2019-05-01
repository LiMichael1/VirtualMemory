#include "Word_.h"

struct Address_ : public Word_
{
	Address_(int x) : addr( new Word_(x)) {};

	Word_ address();
	Word_ displacement();
	Word_ frame();
	Word_ page();

	Word_ *addr;

};