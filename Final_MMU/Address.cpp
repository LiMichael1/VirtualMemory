#include "Address.h"



Address::Address()
{
}


Address::~Address()
{
}

Word Address::address()
{
	Word addr;
	addr.uint32(this->uint32());
    return addr;
}

void Address::address(int x)
{
    this->uint32(x);
}

/**********************************************
create word
initialize disp
return word
**********************************************/
Word Address::displacement()
{
    Word disp; // create word
    disp.uint32(uint32() & 255); // initialize disp
    return disp; // return word with disp;
}

/**********************************************
  set displacemnt in Address object
  shift page # left 8 bits
  add low 8 bits (aka index)
  do not change page#
shift page index to high
mask disp to clean
add page and disp
**********************************************/
void Address::displacement(int disp)
{
    this->uint32((this->page().uint32() << 8 )+(disp&255));
}

Word Address::frame()
{
    return Word();
}

void Address::frame(int x)
{
}

/**********************************************
create word
initialize page
-shift bits right 8 times
-mask lower 8 bits
return word
**********************************************/
Word Address::page()
{
    Word page;
    page.uint32((uint32() >> 8) & 255);
    return Word();
}

void Address::page(int x)
{
    x >> 8;
    x & 255;
    x << 8;

    x += uint32() & 255;

    uint32(x);
}

Address Address::operator>>(int x)
{
	return Address();
}

Address operator>>(cin ,int x)
{
	return std::cin();
}
